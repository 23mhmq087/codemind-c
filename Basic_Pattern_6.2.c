#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int k=n;
    for(i=1;i<=n;i++)
    {
    for(j=n;j>=1;j--)
    {
        if(i>=j)
       printf("%d ",k); 
       else
       printf(" ");
    }
    k--;
    printf("
");
}
return 0;
}