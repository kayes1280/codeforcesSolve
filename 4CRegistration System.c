#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  char s[100000];
  int ar[100000];
  for(int i=0; i<n; i++){
    ar[i]=0;
  }
  for(int i=0; i<n; i++){
    scanf("%s",s);

    if(ar[s[i]]==0){

      ar[s[i]]=1;
      printf("OK\n");
    }
    else {
      printf("%s%d\n",s,ar[s[i]]);

      ar[s[i]]++;
    }
  }

  return 0;
}
