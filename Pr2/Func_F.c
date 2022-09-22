#include <stdio.h>
#include <math.h>

double Func_F(float x){

    double func_F;
    func_F = exp(-abs(x))*sin(x);
    return func_F;
}