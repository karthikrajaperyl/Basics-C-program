
#include <stdio.h>
int happynumber(n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+((n%10)*(n%10));
        n=n/10;
    }
    return sum;
}
int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int result=n;
    while(result!=1 && result!=4){
        result=happynumber(result);
    }
    if(result==1)
    printf("It is the happy number");
    else
    printf("It is not happy number");
}