#include<stdio.h>
int main()
{
    char ch[205];
    scanf("%s",ch);
    int len=strlen(ch);
    for(int i=0; i<len; i++){
        if(ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B'){
            i=i+2;
            printf(" ");
        }
        else {
           printf("%c",ch[i]);
        }
    }
    return 0;
}
