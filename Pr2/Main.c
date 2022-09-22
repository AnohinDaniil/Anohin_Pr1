#include <stdio.h>
#include "Function.h"
 
int main()
{
    float x;
    printf("Enter х: ");
    scanf("%f", &x);
    printf("f(x) = %f\n", Func_F(x));
    printf("g(x) = %f\n", Func_G(x));
   
    return 0;
}