#include<stdio.h>
#define max
int main()
{
    int t;
    scanf("%d",&t);
    int n,a,q;
    while(t--){
        scanf("%d%d%d",&n,&a,&q);
        char s[105];
        scanf("%s",s);
        int p=a,d=a,check=0;
        for(int i=0; i<q; i++){
            if(s[i]=='+'){
                a++;
            }
            else {
                a--;
            }
            if(p==n){
                check=1;
                break;
            }
        }
        if(check){
            printf("YES\n");
        }
        else if(a+p>=n){
            printf("MAYBE\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
