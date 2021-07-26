class Mergesort{
static void merge(int[] arr,int l,int r,int la){
int n1=r-l+1;
int n2=la-r;
int i=0,j=0;
int k=l;
int[] left=new int[n1];
int[] right=new int[n2];
for(int m=0;m<n1;m++)
left[m]=arr[l+m];
for(int n=0;n<n2;n++)
right[n]=arr[r+1+n];
while(i<n1 && j<n2)
{
 if(left[i]<right[j])
  arr[k++]=left[i++];
 else
  arr[k++]=right[j++];
}
while(i<n1){
arr[k++]=left[i++];
}
while(j<n2){
arr[k++]=right[j++];
}
}
static void mergesort(int[] a,int low,int high){

if(low<high)
{
int mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}
} 
public static void main(String[] args)
{  
   int a[]=new int[]{9,7,6,5,4,3};
   mergesort(a,0,a.length-1);
for(int i=0;i<a.length;i++)
   System.out.println(a[i]);
}
}