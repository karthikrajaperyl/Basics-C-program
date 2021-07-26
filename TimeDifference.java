import java.io.*;
import java.util.*;
class TimeDiferrence{
public static void main(String[] args) throws IOException{
InputStreamReader r=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(r);
String time1=br.readLine();
String time2=br.readLine();
String[] t1=time1.split(":");
String[] t2=time2.split(":");
int h1=Integer.parseInt(t1[0]);
int min1=Integer.parseInt(t1[1]);
int h2=Integer.parseInt(t2[0]);
int min2=Integer.parseInt(t2[1]);	
int hr=h2-h1;
int min=(60-min2)+(60-min1);
System.out.println(hr+":"+min%60);
}
}
