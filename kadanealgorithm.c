// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   int maxendinghere=0;
   int maxsofar=0;
   for(int i=0;i<n;i++)
   {
       maxsofar+=a[i];
       if(maxsofar<0)
       maxsofar=0;
       if(maxendinghere<maxsofar)
       maxendinghere=maxsofar;
   }
    printf("%d",maxendinghere);
    return 0;
    
}