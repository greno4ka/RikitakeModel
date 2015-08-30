#include "formats.h"
#include <iostream>

uint butt1,butt2,butt3;

unsigned char *LoadTrueColorBMPFile(const char *path,int *width,int *height)
{
    unsigned char *result = NULL;
    FILE *in = fopen(path,"rb");
    if(!in)
        return NULL;
    BMPHeader hdr;
    fread(&hdr,sizeof(hdr),1,in);
    if(hdr.type != 0x4D42)           // Not a bitmap file at all
        return NULL;
    BMPInfoHeader	infoHdr;
    fread(&infoHdr,sizeof(infoHdr),1,in);
    if(infoHdr.bitsPerPixel != 24)   // Not a truecolor bitmap
        return NULL;
    if(infoHdr.compression)          // Compressed bitmap
        return NULL;
    if((result = new unsigned char[infoHdr.width*infoHdr.height*3]) == NULL)
        return NULL;
    fseek(in,hdr.offset-sizeof(hdr)-sizeof(infoHdr),SEEK_CUR);
    unsigned char *dst = result;
    for(int y=0;y<infoHdr.height;y++) {
        for(int x=0;x<infoHdr.width;x++) {
            dst[2] = fgetc(in);
            dst[1] = fgetc(in);
            dst[0] = fgetc(in);
            dst += 3;
        }
        for(int x=0;x<((4-(infoHdr.width&3))&3);x++)  // Skip alignment bytes
           fgetc(in);
    }
    fclose(in);
    *width = infoHdr.width;
    *height = infoHdr.height;
    return result;
}

/// специальная загрузка для billboard
unsigned char *ConstructTexture(int *w,int *h, const char *a, const char *b)
{
    int width1,height1;
    unsigned char *tex1 = LoadTrueColorBMPFile(a,&width1,&height1);
    if(!tex1)
        return NULL;
    int width2,height2;
    unsigned char *tex2 = LoadTrueColorBMPFile(b,&width2,&height2);
    if(!tex2) {
        delete[] tex1;
        return NULL;
    }
    if(width1 != width2 || height1 != height2) {
        delete[] tex1;
        delete[] tex2;
        return NULL;
    }
    unsigned char *result = new unsigned char [width1*height1*4];
    if(result != NULL) {
        for(int i = 0;i<width1*height1;i++) {
            result[4*i] = tex1[3*i];
            result[4*i + 1] = tex1[3*i + 1];
            result[4*i + 2] = tex1[3*i + 2];
            result[4*i + 3] = (unsigned char)(((int)tex2[3*i] + (int)tex2[3*i + 1] + (int)tex2[3*i + 2])/3);
        }
    }
    delete[] tex1;
    delete[] tex2;
    *w = width1;
    *h = height1;
    return result;
}

void InitBillboards()
{
    unsigned char *tex_bits = NULL;
        int tex_width,tex_height;

        tex_bits = ConstructTexture(&tex_width,&tex_height,"Pictures/x1.bmp","Pictures/x2.bmp");
        glGenTextures(1,&butt1);
        glBindTexture(GL_TEXTURE_2D,butt1);
        glPixelStorei(GL_UNPACK_ALIGNMENT,1);
        glTexImage2D(GL_TEXTURE_2D,
                     0,
                     4,
                     tex_width,tex_height,
                     0,
                     GL_RGBA,
                     GL_UNSIGNED_BYTE,tex_bits);

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

        tex_bits = ConstructTexture(&tex_width,&tex_height,"Pictures/y1.bmp","Pictures/y2.bmp");
        glGenTextures(1,&butt2);
        glBindTexture(GL_TEXTURE_2D,butt2);
        glPixelStorei(GL_UNPACK_ALIGNMENT,1);
        glTexImage2D(GL_TEXTURE_2D,
                     0,
                     4,
                     tex_width,tex_height,
                     0,
                     GL_RGBA,
                     GL_UNSIGNED_BYTE,tex_bits);

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

        tex_bits = ConstructTexture(&tex_width,&tex_height,"Pictures/z1.bmp","Pictures/z2.bmp");
        glGenTextures(1,&butt3);
        glBindTexture(GL_TEXTURE_2D,butt3);
        glPixelStorei(GL_UNPACK_ALIGNMENT,1);
        glTexImage2D(GL_TEXTURE_2D,
                     0,
                     4,
                     tex_width,tex_height,
                     0,
                     GL_RGBA,
                     GL_UNSIGNED_BYTE,tex_bits);

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
}

void Picture(GLfloat x, GLfloat y, GLfloat z, float size1, float size2, GLint texture) //рендеринг биллбоарда
{
    glPushMatrix();
        glTranslatef(x,y,z);
        glRotatef(-fi, 0.0f, 1.0f, 0.0f);
        glRotatef(-psy, (float) cos(fi * Rad), 0.0f, (float) sin((90-fi) * Rad));
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glBindTexture(GL_TEXTURE_2D, texture);
        glColor4f(1.0, 1.0, 1.0, 1);
    glBegin(GL_QUADS);
        glTexCoord2f(1.0f, 0.0f); glVertex3f(-size1, -size2, 0);
        glTexCoord2f(0.0f, 0.0f); glVertex3f( size1, -size2, 0);
        glTexCoord2f(0.0f, 1.0f); glVertex3f( size1,  size2, 0);
        glTexCoord2f(1.0f, 1.0f); glVertex3f(-size1,  size2, 0);
    glEnd();
    glDisable(GL_BLEND);
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}

void AddButts() // добавление массива биллбоардов
{
    Picture(105, 0, 0, 2, 2, butt1);
    Picture(0, 105, 0, 2, 2, butt2);
    Picture(0, 0, 105, 2, 2, butt3);
}
