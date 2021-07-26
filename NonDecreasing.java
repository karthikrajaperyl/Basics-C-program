class NonDecreasing {
    public boolean checkPossibility(int[] nums) {
        int count=0;
        for(int i=0;i<nums.length-1;i++)
        {
         if(nums[i]<=nums[i+1])
             count++;
        }
        return count==1?true:false;            
    }
public static void main(String[] args)
{
 int[] n=new int[]{-1,4,2,3};
 NonDecreasing g=new NonDecreasing();
 System.out.println(g.checkPossibility(n));
}
}