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
    int k=0;
    for(i=0;i<a;i+=1)
    {
     if(arr[i]%2==1 && i%2==1)
     {
         k=1;
     }
     else if(arr[i]%2==1 && i%2==0)
     {
         k=0;
         break;
     }
     }
    if(k==0)
    printf("False");
    else
    printf("True");
}