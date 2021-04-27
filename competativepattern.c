#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
     int min=0;
    for(int i=1;i<=n;i++)
    {
      
        for(int j=1;j<=n;j++)
        {
            min=j<i?j:i;
            printf("%d ",n-min+1);
        }
        for(int j=n-1;j>=1;j--)
        {
            min=i<j?i:j;
            printf("%d ",n-min+1);
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
         for(int j=1;j<=n;j++)
        {
            min=i<j?i:j;
            printf("%d ",n-min+1);
        }
        for(int j=n-1;j>=1;j--){
            min=i<j?i:j;
            printf("%d ",n-min+1);
        }
        printf("\n");
    }
    
    return 0;
  
}