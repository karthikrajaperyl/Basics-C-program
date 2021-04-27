// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
int main() {
int n;
scanf("%d",&n);
int a=0,b=1,c;
for(int i=1;i<=n;i++)
{
    printf("%d ",b);
    for(int j=1;j<i;j++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=j;
        
    }
    a=0;
    b=1;
    printf("\n");
}
}