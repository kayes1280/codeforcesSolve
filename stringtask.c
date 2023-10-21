#include<stdio.h>
#include<string.h>
int main()
{
    char s1[105];
    scanf("%s",s1);
    int i;
    int len=strlen(s1);
    for(i=0; i<len; i++){
    if(s1[i]<97){
        s1[i]=s1[i]+32;
    }
    }

   for(i=0; i<len; i++){
    if(s1[i]!='a'&& s1[i]!='e'&& s1[i]!='i'&& s1[i]!='o'&& s1[i]!='u' && s1[i]!='y')
        printf(".%c",s1[i]);
   }

    return 0;
}
