#include<stdio.h>
int main()
{
    int n,i,last_odd;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)
        {
            last_odd=a[i];
        }
    }
    printf("%d",last_odd);
}