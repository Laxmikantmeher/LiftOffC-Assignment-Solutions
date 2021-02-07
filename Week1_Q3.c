#include<stdio.h>
int main()
{
    float r;
    float p=3.14;
    float D,P,A;
    printf("enter the value of r");
    scanf("%f",&r);
    D=2*r;
    P=2*p*r;
    A=p*r*r;
    printf("%f,%f,%f",D,P,A);
    return 0;
}