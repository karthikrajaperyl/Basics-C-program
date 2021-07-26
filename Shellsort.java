class Shellsort{
public static void main(String[] args){
int[] a=new int[]{8,7,6,5};
int n=a.length;
for(int k=n/2;k>=0;k=k/2){
for(int i=0;i<k;i++)
{
for(int j=k;j<n;j++){
if(a[i+k]<a[j+k])
break;
else
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}
for(int i=0;i<a.length;i++)
System.out.println(a[i]);
}
}
