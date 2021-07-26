import java.util.*;
import java.io.*;
class MaximumNumber{
public static void main(String[] args) throws IOException{
InputStreamReader r=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(r);
int n1=Integer.parseInt(br. readLine());
int n2=Integer.parseInt(br. readLine());
int k=Integer.parseInt(br. readLine());
int a[]=new int[n1];
int b[]=new int[n2];
int count[]=new int[10];
int j=9;
for(int i=0;i<n1;i++)
{
 a[i]=Integer.parseInt(br. readLine());
 count[a[i]]++;
}
for(int i=0;i<n2;i++)
{
 b[i]=Integer.parseInt(br. readLine());
 count[b[i]]++;
}

 while(count[j]>0)
{
if((k--)!=0)
System.out.println(j);

count[j]--;
j--;
}

}

}		 	

