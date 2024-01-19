#include<stdio.h>
int main()
{
    float a,b,c=0,i;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        b=1/i;
        c=c+b;
    }
    printf("%.2f",c);
}