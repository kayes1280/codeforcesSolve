#include<stdio.h>
#include<string.h>
//#include<ctype.h>
int main ()
{
    char s1[105],s2[105];

    scanf("%s%s",s1,s2);
    int len = strlen(s1);
    for(int i=0; i<len; i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    int stringcmp= strcmp(s1 , s2);
    if(stringcmp<0){
        printf("-1\n");
    }
    else if(stringcmp>0){
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}
