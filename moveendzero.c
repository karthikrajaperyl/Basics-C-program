// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        a[count++]=a[i];
    }
    while(count<n)
    a[count++]=0;
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}