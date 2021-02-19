#include<stdio.h>
int main()
{
    char str[50];
    int i,count=1;
    fget("str");
    for (size_t i = 0; i < count; i++)
    {
        if(str[i]==' '|| str[i]=='\n'|| str[i]=='\t')
        {
            count++;
        }
    }
    print("%d",count);
}