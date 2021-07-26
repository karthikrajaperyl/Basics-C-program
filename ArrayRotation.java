import java.util.*;
import java.io.*;
class ArrayRotation{
static int gcd(int a,int b){
if(b==0)
return a;
else
return gcd(b,a%b);
}
public static void main(String[] args)
{
  InputStreamReader r=new InputStreamReader(System.in);
  BufferedReader br=new BufferedReader(r);
  int n=Integer.parseInt(br.readLine());
  int k=Integer.parseInt(br.readLine());
  int[] a=new int[n]; 
  for(int i=0;i<n;i++)
  {
   a[i]=Integer.parseInt(br.readLine());
  }
  int g=gcd(n,k);
  int j,d;  
for(int i=0;i<g;i++)
{
  int temp=a[i];
  j=i; 
  while(True)
 {
 d=j+k;
 if(k>n)
 k=k-n;
 if(i==d)
 break;
 a[j]=a[d];
 j=d;
}
a[d]=temp;
}
System.out.println(a);
}
} 