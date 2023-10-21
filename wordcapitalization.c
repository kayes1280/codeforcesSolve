#include<stdio.h>
int main()
{
    char s1[1005];
    scanf("%s",s1);
    if(s1[0]>=97){
        s1[0]=s1[0]-32;
    }
    printf("%s\n",s1);

    return 0;
}
