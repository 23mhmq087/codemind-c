#include<stdio.h>
int main()
{
    char st[100],st1[200];
    scanf("%[^
]s",st);
    int i,len=0;
    for(i=0;st[i]!=NULL;i++)
    {
        len=len+1;
    }
    i=0;
    int j=len-1,temp;
    while(i<=j)
    {
        temp=st[i];
        st[i]=st[j];
        st[j]=temp;
        i++;
        j--;
    }
    printf("%s",st);
}