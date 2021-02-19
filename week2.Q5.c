#include<stdio.h>
int main()
{
    int i,j,c;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j==i||j==c-i+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}