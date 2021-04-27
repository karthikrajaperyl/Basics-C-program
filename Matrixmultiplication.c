// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int r,c;
   scanf("%d%d",&r,&c);
   int a[r][c];
int ans[10][10];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);       
    }
}
int sum=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
    ans[i][j]=0;
}
for(int i=0;i<r;i++)
{
    sum=0;
    for(int j=0;j<c;j++)
    {
for(int k=0;k<c;k++){
 ans[i][j]+=a[i][k]*a[k][j];       
    }
}
}

for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
       printf("%d",ans[i][j]); 
    }
}
    return 0;
}