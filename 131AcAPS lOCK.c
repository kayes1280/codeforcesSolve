#include<stdio.h>
int main()
{
    char s1[105];
    int c=1;
    scanf("%s",s1);
    int len=strlen(s1);

    for(int i=1; i<len; i++){
        if(s1[i]>=97){
            c=0;
            break;
        }
    }
    if(c){
        for(int i=0; i<len; i++){
            if(s1[i]>=97){
                s1[i]=s1[i]-32;
            }
            else {
                s1[i]=s1[i]+32;
            }
        }
        printf("%s\n",s1);
    }
    else {
        printf("%s\n",s1);
    }

    return 0;
}
