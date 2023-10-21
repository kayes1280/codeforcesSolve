#include<stdio.h>
#include<string.h>
int main()
{
   char s1[105];
   int c=0,d=0,i;
   scanf("%s",s1);
   int len=strlen(s1);
   for(i=0; i<len; i++){
    if(s1[i]<=90){
        c++;
    }
    else {
        d++;
    }
   }


    for(i=0; i<len; i++){
        if(c>d){
            if(s1[i]>=97)
            s1[i]=s1[i]-32;
        }
        else {
            if(s1[i]<97)
            s1[i]=s1[i]+32;

        }
    }
    printf("%s",s1);
    return 0;
}
