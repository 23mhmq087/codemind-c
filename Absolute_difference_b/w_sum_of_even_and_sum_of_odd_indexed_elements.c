#include<stdio.h>
int main()
{
    int n,sum=0,sub=0;
    scanf("%d",&n);
int as[n],i;
for(i=0;i<n;i++)
{
    scanf("%d",&as[i]);
}
 for(i=0;i<n;i++)
 {
    if(i%2==0)
    {
        sum=sum+as[i];
    }
 }
 for(i=0;i<n;i++)
 {
     if(i%2==1)
     {
         sub=sub+as[i];
     }
 }
 int res;
 res=sum-sub;
 printf("%d",res);
}