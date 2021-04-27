// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[10];
    int n,sum,flag=0;
    scanf("%d%d",&n,&sum);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cursum=a[0];
    int start=0;
    for(int i=1;i<=n;i++)
    {
        while(cursum>sum && start<i-1){
            cursum-=a[start];
            start++;
        }
        if(cursum==sum){
            printf("%d--%d",start,i-1);
            flag=1;
        }
        if(i<n)
        cursum+=a[i];   
    }
    if(flag)
    printf("The element is not found");
    return 0;
}