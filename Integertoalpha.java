import java.util.*;
public class Integertoalpha
{
	public static void main(String[] args) {
		String a[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
        Scanner in = new Scanner(System.in);
        List<String> l=new ArrayList<>();
        for(int i=0;i<26;i++)
        {
            l.add(a[i]);
        }
        int r=0;
        long n=in.nextLong();
        String v;
        while(r<=n)
        {
            v=l.get(r);
            for(int i=0;i<26;i++)
            {
                l.add(v+a[i]);
            }
            r++;
        }
      System.out.println("ans " + l.get((int)n-1));
	}
}