#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d%d",&x,&y);
    a=500-((x+y)*2);
    b=1000-(y*4);
    c=500-(x*2);
    d=1000-((x+y)*4);
    if(a+b>c+d)
    printf("%d",a+b);
    else
    printf("%d",c+d);
}