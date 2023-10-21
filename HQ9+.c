#include<stdio.h>
int main()
{
    char s1[105];
    char a[4]="HQ9+";
    int check=0;
    scanf("%s",s1);
    int len=strlen(s1);
    for(int j=0; j<3; j++){
            for(int i=0; i<len; i++){
                if(a[j]==s1[i]){
                    check=1;
                }
            }
    }
    if(check){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
