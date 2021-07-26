import java.util.*;
import java.io.*;
class DictMatch{
public static String encodestring(String pat){
HashMap<Character,Integer> mp=new HashMap<>();
String res="";
int j=0;
for(int i=0;i<pat.length();i++)
{
  if(!mp.containsKey(pat.charAt(i)))
  mp.put(pat.charAt(i),j++);
 res+=mp.get(pat.charAt(i)); 
}
return res;
}
public static void Patternmatch(String[] a,String pat){
int len=pat.length();
String patterncode=encodestring(pat);
for(String word:a){
if(word.length()==len&&encodestring(word).equals(patterncode)){
System.out.println(word);
}
}
}
public static void main(String[] args) throws IOException{
InputStreamReader r=new InputStreamReader(System.in);
BufferedReader br=new BufferedReader(r);
int n=Integer.parseInt(br.readLine());
String[] dict=new String[n];
for(int i=0;i<n;i++)
dict[i]=br.readLine();
String pat=br.readLine();
Patternmatch(dict,pat);
}
}