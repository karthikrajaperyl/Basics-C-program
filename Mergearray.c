// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n1,n2;
scanf("%d%d",&n1,&n2);
int a[n1];
for(int i=0;i<n1;i++)
scanf("%d",&a[i]);
int b[n2];
for(int i=0;i<n2;i++)
scanf("%d",&b[i]);
int i=0,j=0;
int c[n1+n2];
int k=0;
while(i<n1&&j<n2){
    if(a[i]<b[j]){
        c[k++]=a[i++];
    }
    else
    {
        if(b[j]<a[i]){
            c[k++]=b[j++];
        }
    }
}
while(i<n1)
c[k++]=a[i++];
while(j<n2)
c[k++]=b[j++];
for(int i=0;i<k;i++)
printf("%d",c[i]);
    return 0;
}