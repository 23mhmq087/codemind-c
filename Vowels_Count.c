#include<stdio.h>
int main()
{
    char s[50],c=0,count=0;
    scanf("%[^
]s",s);
    while(s[c]!=NULL)
    {
        if(s[c]=='a' || s[c]=='A' || s[c]=='e' || s[c]=='E' ||s[c]=='i' || s[c]=='I' || s[c]=='o' || s[c]=='O' || s[c]=='u' || s[c]=='U')
        count++;
        c++;
    }
    printf("%d",count);
    return 0;
    }