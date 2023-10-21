#include<stdio.h>
//#include<string.h>
int main()
{
   char s1[105],t[105];
   scanf("%s%s",s1,t);

   int len = strlen(s1);
   for(int i=0; i<len; i++){
    if(s1[i]!=t[len-i-1]){
        printf("NO\n");
        return 0;
    }
   }
   printf("YES\n");
    return 0;
}
