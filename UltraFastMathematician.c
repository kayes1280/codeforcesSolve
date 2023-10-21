#include<stdio.h>
int main()
{
    char s1[105],s2[105];

    scanf("%s%s",s1,s2);
    int len=strlen(s1);
    for(int i=0; i<len; i++){

        if(s1[i]==s2[i]){
            printf("0");
        }
        else {
            printf("1");
        }
    }

    return 0;
}
