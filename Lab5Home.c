#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    double x, y, z, a, b, c, Res;
    printf("Введите числа x, y, z : \n");
    scanf("%lf %lf %lf", &x, &y, &z);
    a = exp(fabs(x-y)) * pow(fabs(x-y), x+y);
    b = atan(x) + atan(z);
    c = pow(pow(x, 6) + pow(log(y), 2), 1.0/3.0);
    Res = a/b + c;
    printf("result = %.3lf\n", Res);
}