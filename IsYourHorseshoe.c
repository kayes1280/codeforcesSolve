#include<stdio.h>
int main()
{
   long long int  ar[4];
    int c=0;
   for(int i=0; i<4; i++){
    scanf("%lld",&ar[i]);
   }
   for(int i=0; i<4-1; i++){
        for(int j=i+1; j<4; j++){
            if(ar[i]==ar[j]){
                c++;
                break;
            }
        }
   }
   printf("%d\n",c);

    return 0;
}
