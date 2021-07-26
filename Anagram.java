class Anagram{
public static void main(String[] args)
{
 int a[]=new int[26];
 int flag=0;
 String s1="listen";
 String s2="silent";
 for(int i=0;i<s1.length();i++)
 {
  a[s1.charAt(i)-'a']++;
 }
 for(int j=0;j<s2.length();j++)
 {
 a[s2.charAt(j)-'a']--;
 }
 for(int i=0;i<26;i++)
 {
  if(a[i]!=0)
 {
  flag=1;
}
 }
if(flag==0)
 System.out.println("Anagram");
else
 System.out.println("Not Anagram");
}
} 