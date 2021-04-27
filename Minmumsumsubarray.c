#include <stdio.h>
#include<string.h>
int main() {
   int n,k;
   scanf("%d%d",&n,&k);
   int a[n];
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
    
   int cur=0,min=0;
   int last=0;
   for(int i=0;i<n;i++)
   {
       cur+=a[i];
       if(i+1>=k){
           if(min>cur){
           min=cur;
           last=i;
           }
           cur-=a[i+1-k];
       }
    }
    printf("%d-%d",last-k+1,last);
}