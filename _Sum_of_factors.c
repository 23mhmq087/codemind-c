#include<stdio.h>
int main()
{
	int a,c=0,i;
	scanf("%d%d",&a);
 for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
		    c=c+i;
		}
	}
	printf("%d",c);
}