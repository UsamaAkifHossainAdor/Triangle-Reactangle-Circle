#include <stdio.h>
#include <math.h>

int main () {

    double lenght,width,area;
    printf("Enter lenght value : ");
    scanf("%lf",&lenght);

    printf("Enter widht value : ");
    scanf("%lf",&width);

    area = lenght * width; // area of rectangle = lenght * width
    printf("Area of reactangle =%.2lf",area);

    return 0;
}