#include <stdio.h>
int main() {
    char str[105];
    scanf("%s",str);
    int i,c=1,max=0;
    int len=strlen(str);
    for(i=0; i<len-1; i++){
        if(str[i]==str[i+1]){
            c++;
        }
        else {
            c=1;
        }

    }
    if(c>max){
            max=c;
        }
    if(max>=7){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

   return 0;
}
