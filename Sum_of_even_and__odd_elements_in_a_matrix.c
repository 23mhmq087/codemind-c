#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j,es=0,eo=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 for(i=0;i<n;i++)
 {
     for(j=0;j<m;j++)
     {
         if(a[i][j]%2==0)
         {
             es+=a[i][j];
         }
         else
         {
             eo+=a[i][j];
     }
 }
}
printf("%d %d ",es,eo);
}