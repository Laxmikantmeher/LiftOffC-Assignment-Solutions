#include <stdio.h>
int main()
{
    int c,f;
    printf("type your temperature in celsius");
    scanf("%d",&c);
     f=(c*(9/5))+32;
    printf("%d",f);
    return 0;
}