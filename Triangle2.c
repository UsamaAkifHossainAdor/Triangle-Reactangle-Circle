// area = sqrt(s*(s-a)*(s-b)*(s-c))
// s = a+b+c/2
#include <stdio.h>
#include<math.h>


int main () {

    double a,b,c,s,area;
    printf("Enter three values : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    s= ( a+b+c)/2;// use brackets
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle = %.2lf\n",area);

    return 0;

    

    

}