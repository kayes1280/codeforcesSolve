#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    char s1[105];
    scanf("%s",s1);
        for(int j=0; j<n; j++){
            if(s1[j]<=90){
                s1[j]=s1[j]+32;
            }
        }
    for(int i=97; i<=122; i++){
        for(int j=0; j<n; j++){
            if(i==s1[j]){
                c++;
                break;
            }
        }
    }
    if(c==26){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
