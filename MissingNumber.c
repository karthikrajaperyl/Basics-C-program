#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
int search(int a[10],int l,int r){
    int mid;
    while(l<r)
    {
        mid=(l+r)/2;
        if(a[mid]!=(mid+1)&&a[mid-1]==mid)
        return (mid+1);
        if(a[mid]!=mid+1)
        r=mid-1;
        else
        l=mid;
    }
    return -1;
}
int main() {
  int n,max,min;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("%d",search(a,0,n-1));
}