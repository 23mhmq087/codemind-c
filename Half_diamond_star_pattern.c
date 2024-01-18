#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    if(a>2 && a<101)
    {
        for(i=1;i<=2*a-1;i++)
   {
        if(i<=a)
   {
            for(j=1;j<=i;j++)
    {
        printf("*");
    }
        printf("
");
}
if(i>a)
{
    int b=i-a;
    for(j=1;j<=i-2*b;j++)
    {
        printf("*");
    }
    printf("
");
}
}
}
else
printf("The pattern is not possible");
}