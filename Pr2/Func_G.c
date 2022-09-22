#include <stdio.h>
#include <math.h>

double Func_G(float x){

    double func_G;
    func_G = exp(-abs(x))*cos(x);
    return func_G;
}