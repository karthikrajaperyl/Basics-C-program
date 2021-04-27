#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
int main() {
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  int maxdiff=0;
  for(int i=0;i<n;i++) {
      for(int j=i+1;j<n;j++)
      {
          if(maxdiff<(a[j]-a[i]))
          maxdiff=a[j]-a[i];
      }
  }
  printf("%d",maxdiff);
}