#include "rungekutta.h"

double RungeKutta :: f (vector <double> y0, int flag) {
    switch (flag) {
    case 0:
        return -M*y0[0] + y0[1]*y0[2];
        break;
    case 1:
        return -M*y0[1] + y0[0]*(y0[2] - A);
        break;
    case 2:
        return 1 - y0[0]*y0[1];
        break;
    default:
        return -1;
        break;
    }
}

double RungeKutta :: k1 (vector <double> y0, int flag) {
    return f(y0, flag);
}

double RungeKutta :: k2 (vector <double> y0, double k1, int flag) {
    vector <double> y1(3);
    for (int i = 0; i <= 2; i ++) {
        y1[i] = y0[i] + tau/2*k1;
    }
    return f(y1, flag);
}

double RungeKutta :: k3 (vector <double> y0, double k2, int flag) {
    vector <double> y1(3);
    for (int i = 0; i <= 2; i ++) {
        y1[i] = y0[i] + tau/2*k2;
    }
    return f(y1, flag);
}

double RungeKutta :: k4 (vector <double> y0, double k3, int flag) {
    vector <double> y1(3);
    for (int i = 0; i <= 2; i++) {
        y1[i] = y0[i] + tau*k3;
    }
    return f(y1, flag);
}

RungeKutta :: RungeKutta (double step,  double p1, double p2) {
    tau = step; M = p1; A = p2;
}

void RungeKutta :: Method(const vector <double> &y0, vector <double> &y1) {
    double p1, p2, p3, p4;
    for (int i = 0; i <= 2 ; i++) {
        p1 = k1 (y0, i);
        p2 = k2 (y0, p1, i);
        p3 = k3 (y0, p2,  i);
        p4 = k4 (y0, p3, i);

        y1[i] = y0[i] + tau/6*(p1 + 2*p2 + 2*p3 + p4);
    }
}
