#include<stdio.h>
void main(){
int n,x,flag=0;
scanf("%d%d",&n,&x);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
if(a[i]==x){
printf("Element is found");
flag=1;
}
}
if(!flag)
printf("Element is not found");
}