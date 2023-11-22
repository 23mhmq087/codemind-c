#include<stdio.h>
int main()
{
    int a;
    scanf("%d%d%d",&a);
    for(int i=1;i<=12;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
    return 0;
}