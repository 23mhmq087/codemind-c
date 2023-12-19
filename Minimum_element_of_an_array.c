#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
int as[n],i;
for(i=0;i<n;i++)
{
    scanf("%d",&as[i]);
}
 int min=as[0];
 for(i=1;i<n;i++)
 {
     if(min>as[i])
     {
         min=as[i];
     }
 }
 printf("%d",min);
}