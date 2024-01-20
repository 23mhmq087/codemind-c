#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    int a=x+y;
    int b=y+z;
    int c=x+z;
    if(w==x || w==y ||w==z ||w==a || w==b ||w==c)
    printf("YES");
    else
    printf("NO");
    
}