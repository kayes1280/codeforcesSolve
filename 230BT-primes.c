#include<stdio.h>
int main()
{
    long long int n,c=0;
    scanf("%I64d",&n);
    long long int ar[n];
    for(int i=0; i<n; i++){
        scanf("%I64d",&ar[i]);

        for(int j=1; j<=ar[i]; j++){
            if(ar[i]%j==0){
                c++;
            }
        }
        if(c==3){
                    printf("YES\n");
                }
                else {
                    printf("NO\n");
                }
    }
    return 0;
}
