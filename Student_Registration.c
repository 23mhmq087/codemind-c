#include<stdio.h>
int main()
{
    int i,a,t,n,k,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&m,&k);
        a=m-k;
        if(n<=a)
        printf("YES
");
        else
        printf("NO
");
    }
}