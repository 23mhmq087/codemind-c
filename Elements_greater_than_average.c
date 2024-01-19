#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,t=0,avg=0,d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        t+=a[i];
    }
    avg=t/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
            d++;
        }
    }
    printf("%d",d);
}