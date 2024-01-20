#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(int i=0;a<=b;a++)
    {
        if(a%2==0 && a%3==0)
        c++;
    }
    printf("%d",c);
    return 0;
}