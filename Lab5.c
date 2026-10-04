#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>

void task1(){
double gr;
printf("Введите угол в градусах: ");
scanf("%lf", &gr);
printf("sin угла %lf градусов =%.6lf\n", gr,  sin(gr * M_PI / 180));
}

void task2(){
    float c = 1.3f;
    float x, a, b, y;
    printf("Введите число X : ");
    scanf("%f", &x);
    a = pow(c,3) + log(fabs(x));
    b = pow(a,2) + sqrt(c);
    b = -b;
    y = exp(x) + pow(5.8, b);
    printf("Результат: %.1f\n", y);
    printf("Задание 3:\n");
    int A,B,C, res;
    A = (int)a/1;
    B = (int)b/1;
    C = (int)y/1;
    res = ((A%2==0 && B%2!=0) || (A%2!=0 && B%2==0)) && (A%3==0 && B%3==0 && C%3==0);
    printf("Результат: %d\n", res);
}

int main(){
    setlocale(LC_ALL, "Russian");
    printf("task1\n");
    task1();
    printf("task2\n");
    task2();

}