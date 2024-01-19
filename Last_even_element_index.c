#include<stdio.h>
int main()
{
    int n,i,last_even;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            last_even=i;
        }
    }
    printf("%d",last_even);
}