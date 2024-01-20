#include<stdio.h>
int main()
{
    float x,y,a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&x,&y);
    c=a/x;
    d=b/y;
    if(c<d)
    printf("Walter");
    else if(d<c)
    printf("Jesse");
    else
    printf("Both");
}