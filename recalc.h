#ifndef RECALC_H
#define RECALC_H


extern int X,Y;

template <class T> const T& min (const T& a, const T& b)
{
    return !(b<a)?a:b;     // or: return !comp(b,a)?a:b; for version (2)
}
/*
double min (double a,double b)
{
    return !(b<a)?a:b;     // or: return !comp(b,a)?a:b; for version (2)
}*/

inline double fy1(double y0)
{
    double Z=min(X/4,Y/2);
    return (Y/5)+y0*Z/2.0f;
}

inline double fx1(double x0)
{
    double Z=min(X/4,Y/2);
    return X/8+x0*Z/100.0f;
}


inline double fy2(double y0)
{
    double Z=min(X/4,Y/2);
    return (Y/5)+y0*Z/2.0f;
}

inline double fx2(double x0)
{
    double Z=min(X/4,Y/2);
    return X/8+x0*Z/100.0f;
}


#endif // RECALC_H
