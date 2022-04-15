class Solution {
    public int firstMissingPositive(int[] nums) {
        for(int i=0;i<nums.length;)
        {
            if(nums[i]<=0 || nums[i]>nums.length) i++;
            else if(i!=nums[i]-1)
            {
                int tmp=nums[i];
                if(nums[i]==nums[nums[i]-1])
                {
                    i++;
                    continue;
                }
                nums[i]=nums[nums[i]-1];
                nums[tmp-1]=tmp;
            }
            else i++;
        }
        for(int i=0;i<nums.length;i++) 
            if(i!=nums[i]-1) 
                return i+1;
        return nums.length+1;
    }
}
