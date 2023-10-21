#include <stdio.h>
int main() {

        char s1[105];
        char s2[5]="hello";
        scanf("%s",&s1);
        int c=0,j=0;
        for(int i=0; i<5; i++){
           while(s1[j]!='\0'){
                if(s2[i]==s1[j]){
                    c++;
                    j++;
                    break;
                }
                else
                    j++;
            }
        }
        if(c==5){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

  return 0;
}
