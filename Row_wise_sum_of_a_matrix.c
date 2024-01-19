#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,i;
    scanf("%d%d",&n,&n1);
    int a[n][n1],j,c=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
            c=c+a[i][j];
        }
    printf("%d ",c);
}
}