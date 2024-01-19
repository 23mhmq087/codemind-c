#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,x,y,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]<x || a[i]>y)
        {
          sum+=a[i];
        }
    }
printf("%d",sum);
}