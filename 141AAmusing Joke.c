#include<stdio.h>
#include<string.h>
int main()
{
    char s1[105],s2[105],s3[105];
    int temp=0,semp=0;
    scanf("%s%s%s",s1,s2,s3);
    strcat(s1,s2);
    int len=strlen(s1);
    int len1=strlen(s3);

         for(int i=0; i<len; i++){
            for(int j=i+1; j<len; j++){
                if(s1[i]>s1[j]){
                    temp=s1[i];
                    s1[i]=s1[j];
                    s1[j]=temp;
                }
            }
         }
         for(int k=0; k<len1; k++){
            for(int l=k+1; l<len1; l++){
                if(s3[k]>s3[l]){
                     semp=s3[k];
                    s3[k]=s3[l];
                    s3[l]=semp;
                }
            }
        }
        if(strcmp(s1==s3)==0){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        }

    return 0;
}
