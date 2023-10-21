#include<stdio.h>
int main()
{
    long int n;
    int sum=0;
    char s[2000000];
    scanf("%ld",&n);
    for(int i=0; i<n; i++){
        scanf("%s",s);

        if(s[0]=='T'){
            sum +=4;
        }
        else if(s[0]=='C'){
            sum +=6;
        }
         else if(s[0]=='O'){
            sum +=8;
        }
         else if(s[0]=='D'){
            sum +=12;
        }
         else if(s[0]=='I'){
            sum +=20;
        }
    }
    printf("%d\n",sum);

    return 0;
}
