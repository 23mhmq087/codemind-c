#include<stdio.h>
int main()
{
    int i,x,t,f1=0,f2=1;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("%d ",f1);
        t=f1+f2;
        f1=f2;
        f2=t;
  }
}