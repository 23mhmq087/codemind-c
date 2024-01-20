#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(c=0;a<=b;a++)
    {if(a%3==0)
    c++;
    }
    printf("%d",c);
}