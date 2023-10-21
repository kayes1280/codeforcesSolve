#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1005];
    int i;
    gets(s1);
    int len=strlen(s1);
    for(i=0; i<len; i++){
        for(int j=0; j<len; j++){
        if(s1[i]>s1[j]){
            int temp=s1[i];
            s1[i]=s1[j];
            s1[j]=temp;
            }
        }
    }
    int c=0;
    for(int i=0; i<len; i++){
        if(s1[i]=='{' || s1[i]=='}' || s1[i]==' ' || s1[i]==','){
            continue;
        }
        else if(s1[i]!=s1[i+1]){
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
