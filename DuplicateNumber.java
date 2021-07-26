class DuplicateNumber{
public static void main(String[] args)
{
 int[] a=new int[]{1,2,3,3,4,5,5,6,6};
 int[] b=new int[];
 for(int i=0;i<a.length;i++)
{
 b[a[i]]++;
}
 for(int i=0;i<a.length;i++)
{
 if(b[a[i]]>1){
   System.out.printf("%d",a[i]);
   b[a[i]]=0;
}
}
}  
}
