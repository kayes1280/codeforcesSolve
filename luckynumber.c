#include<stdio.h>
int main()
{
    char s1[20];
    scanf("%s",s1);
    int i,l=0;
    int len =strlen(s1);
    for(i=0; i<len; i++){

        if(s1[i]=='4' || s1[i]=='7'){
         l++;
        }
    }
    if(l==4 || l==7){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }


    return 0;
}
