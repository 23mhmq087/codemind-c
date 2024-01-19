#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    for(i=0;i<a;i++)
    {
   if(arr[i]%2==0 && i%2==0)
   k=1;
  else if(arr[i]%2==0 && i%2==1)
  {
      k=0;
      break;
  }
    }
    if(k>=1)
    printf("True");
    else
    printf("False");
}