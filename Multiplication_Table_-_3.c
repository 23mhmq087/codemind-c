#include<stdio.h>
int main()
{
    int a,n,m;
    scanf("%d%d%d",&a,&n,&m);
    for(int i=n;i<=m;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
    return 0;
}