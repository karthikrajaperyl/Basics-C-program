#include<stdio.h>
int kadane(int a[]){
    int maxsofar=0;
    int maxendinghere=0;
for(int i=0;i<8;i++)
   {
       maxsofar+=a[i];
       if(maxsofar<0)
       maxsofar=0;
       if(maxendinghere<maxsofar)
       maxendinghere=maxsofar;
   }
   return maxendinghere;
   }
int main() {
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("%d",kadane(a));
   int max=0;
   for(int i=0;i<n;i++)
   {
       max=max+a[i];
       a[i]=-a[i];
   }
    int m=kadane(a);
    printf("%d",m);
    int maxendinghere=max+m;
   
    printf("%d",maxendinghere);
    return 0;
    
}