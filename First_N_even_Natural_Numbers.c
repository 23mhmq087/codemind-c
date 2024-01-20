#include<stdio.h>
int main()
{
int a,i,s=0;
scanf("%d",&a);
for(i=a*2;i>1;i--)
{
    if(i%2==0)
    {
        printf("%d ",i);
    }
}
}