import java.util.*;
import java.io.*;
class Substringspilt{
public static int spiltstring(String S){
return spiltstringutil(S,new HashSet<String>());
}
public static int spiltstringutil(String s,Set<String> a){
int res=0;
for(int i=0;i<s.length();i++){
String str=s.substring(0,i);
if(!a.contains(str))
{
a.add(str);
res=Math.max(res,spiltstringutil(s.substring(i),a)+1);
a.remove(str);
}
}
return res;
}	
public static void main(String[] args) throws IOException{
InputStreamReader r=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(r);
String str=br.readLine();
int res=spiltstring(str);
System.out.println(res);
}
}

