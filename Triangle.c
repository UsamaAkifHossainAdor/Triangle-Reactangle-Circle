// write a program that calculates an area of triangle
#include <stdio.h>
int main() {
    float base,height,area;

    printf("base : ");
    scanf("%f",&base);

    printf("height:");
    scanf("%f",&height);

    area = (float)1/2 * base * height;
    printf("Area =%.2f",area);

    return 0;



}