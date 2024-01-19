#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=n%2;
    for(i=0;i<n/2;i++)
    {
    printf("%d %d ",arr[i],arr[n-i-1]);
    }
    if(k)
    printf("%d 0",arr[n/2]);
}