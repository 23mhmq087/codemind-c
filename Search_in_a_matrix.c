#include<stdio.h>
int main()
{
    int a[5][5],r,c,i,j,x,f=0;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 scanf("%d",&x);
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         if(x==a[i][j])
         {
             f=1;
         }
     }
 }
 if(f>=1)
 printf("1");
 else
 printf("0");
}