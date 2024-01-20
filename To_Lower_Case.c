#include<stdio.h>
int main()
{
    char s[30],s1[30];
    scanf("%[^
]s",s);
    int i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=95)
        {
            s[i]=s[i]+32;
        }
    }
    printf("%s",s);
}