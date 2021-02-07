#include <stdio.h>
int main()
{
    int p,c,m,b,cs;
    printf("enter your marks in physics chemistry maths bio and computer science");
    scantf("%d,%d,%d,%d",&p,&c,&m,&b,&cs);
    float per;
    per=(p+c+m+b+cs)/5;
    if(per>90);
    printf("A");
     else if(per>80);
    printf("B");
     else if(per>70);
     printf("C");
     else if(per>60);
     printf("D");
     else if (per>40);
     printf("E");
     else if (per<40);
     printf("F");
     return 0
}