import java.io.*;
import java.util.*;
class HollowTriangle{
public static void main(String[] args) throws IOException{
InputStreamReader r=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(r);
int n=Integer.parseInt(br.readLine());
for(int i=0;i<n;i++){
for(int j=0;j<2*n-1;j++){
if(i==n-1 || i+j==n-1 || j-i==n-1)
System.out.print("*");
else
System.out.print(" ");
}
System.out.println();
}
}
}
