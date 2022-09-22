#include <stdio.h>
#include <math.h>


int main(){

    float x;
    printf("Enter х: ");
    scanf("%f", &x);
    printf("f(x) = %f\n", exp(-abs(x))*sin(x));
    printf("g(x) = %f\n", exp(-abs(x))*cos(x));
    return 0;
   
}




