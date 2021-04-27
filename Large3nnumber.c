#inlcude<stdio.h>
void main(){
int n;
scanf("%d,&n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int first=0,second=0,third=0;
for(int i=0;i<n;i++){
if(first<a[i]){
third=second;
second=first;
first=a[i];
}
if(second<a[i]){
third=second;
second=a[i];
}
if(third<a[i])
third=a[i];
}
printf("%d%d%d",a,b,c);
}