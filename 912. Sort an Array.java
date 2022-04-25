// COUNTING SORT
class Solution {
    public int[] sortArray(int[] nums) {
        int ma=nums[0],mi=nums[0];
        for(int i=0;i<nums.length;i++)
        {
            ma=Math.max(ma,nums[i]);
            mi=Math.min(mi,nums[i]);
        }
        int arr[] = new int[ma+1];
        int arr1[] = new int[Math.abs(mi)+1];
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]>=0) arr[nums[i]]+=1;
            if(nums[i]<0)  arr1[Math.abs(nums[i])]+=1;
        }
        int ind=0;
        for(int i=arr1.length-1;i>0;i--)
        {
            for(;arr1[i]!=0;arr1[i]--)
            {
                nums[ind]=-i;
                ind++;
            }
        }
        for(int i=0;i<arr.length;i++)
        {
            for(;arr[i]!=0;arr[i]--)
            {
                nums[ind]=i;
                ind++;
            }
        }
        return nums;
     }
}
