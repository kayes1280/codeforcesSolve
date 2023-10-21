#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    char s1[55];
    scanf("%s",s1);
    while(t--){
        for(int i=0; i<n-1; i++){
            if(s1[i]=='B' && s1[i+1]=='G'){
                int temp=s1[i];
                s1[i]=s1[i+1];
                s1[i+1]=temp;
                i++;
            }
        }
    }
    printf("%s",s1);

    return 0;
}
