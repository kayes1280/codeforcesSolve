#include<stdio.h>
#include<string.h>
int main()
{
    char s1[105];
    int i;
    scanf("%s",s1);

    int len = strlen(s1);
    int a=0;
    int b=0;
    int c=0;
    for(i=0; i<len; i++){
        if(s1[i]=='1'){
            a=a+1;
        }
        else if(s1[i]=='2'){
            b=b+1;
        }
        else if(s1[i]=='3'){
            c=c+1;
        }
    }
    if(a>0){
        printf("1");
    }
    for(i=1; i<a; i++){
        printf("+1");
    }
    if(b>0){
           if(a==0)
        printf("2");
    else {
        printf("+2");
    }
    }

    for(i=1; i<b; i++){
        printf("+2");
    }
    if(c>0){
        if((a+b)==0){
            printf("3");
        }
        else {
            printf("+3");
        }
    }
    for(i=1; i<c; i++){
        printf("+3");
    }
    return 0;
}
