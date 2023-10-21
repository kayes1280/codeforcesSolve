#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[5005];
        char b[5005];
        scanf("%s%s",a,b);
        int c=0;
        int len= strlen(a);
         for(int i=0; i<len-1; i++){
            if(a[i]=='0' && b[i]=='0' && a[i+1]=='1' && b[i+1]=='1'){
                c=1;
                break;
            }
         }
       if(c){
        printf("YES\n");
       }
       else {
        printf("NO\n");
       }
    }
    return 0;
}
