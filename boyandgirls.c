#include<stdio.h>
#include<string.h>
int main()
{
    char s1[105];
    int arr[150];
    int i;
    scanf("%s",s1);
    int count=0;
    for(i=0; i<150; i++){
        arr[i]=0;
    }

    int len=strlen(s1);
    for(i=0; i<len; i++){
        if(arr[s1[i]]==0){
            arr[s1[i]]=1;
            count++;
        }
    }
    if(count%2==0){
        printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
