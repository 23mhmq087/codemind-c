#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,i;
    scanf("%d%d",&n,&n1);
    int a[n][n1],j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int n2,n3;
    scanf("%d%d",&n2,&n3);
    int b[n2][n3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n3;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("
");
    }
}