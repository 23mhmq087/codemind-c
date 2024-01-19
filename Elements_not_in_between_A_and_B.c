#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c,d,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&c,&d);
    for(i=0;i<n;i++)
    {
        if(a[i]<c || a[i]>d)
        {
            printf("%d ",a[i]);
            flag=1;
        }
    }
    if(flag==0)
    printf("-1");
}