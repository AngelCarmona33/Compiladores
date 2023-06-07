#include<stdio.h>
#define PI 3.14159265

double area_func(double radius);
double circumference_func(double radius);

int main(){
    double radius = 3.0;
    printf("From area_func: %8.3lf\n", area_func(radius));
    printf("From circumference_func: %8.3lf\n", circumference_func(radius));

    return 0;
}

double area_func(double radius){
    return PI*radius*radius;
}

double circumference_func(double radius){
    return 2.0*PI*radius;
}