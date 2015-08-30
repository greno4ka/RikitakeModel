#ifndef RUNGEKUTTA_H
#define RUNGEKUTTA_H
#include <vector>

using namespace std;

class RungeKutta
{
private:
    double tau, M, A;
    inline double f (vector <double> y0, int flag);
    inline double k1 (vector <double> y0, int flag);
    inline double k2 (vector <double> y0, double k1, int flag);
    inline double k3 (vector <double> y0, double k2, int flag);
    inline double k4 (vector <double> y0, double k3, int flag);

public:

    // конструктор копирования параметров
    RungeKutta (double step, double p1, double p2);

    // метод Рунге - Кутты
    void Method(const vector <double> & y0, vector <double> &y1);
};

#endif // RUNGEKUTTA_H
