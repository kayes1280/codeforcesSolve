#include<stdio.h>
int main()
{
   int n,c=1;
   scanf("%d",&n);
   int ar[n];
   for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
        }
    for(int i=0; i<n-1; i++){
        if(ar[i]!=ar[i+1]){
            c++;
        }
    }
   printf("%d\n",c);
    return 0;
}
