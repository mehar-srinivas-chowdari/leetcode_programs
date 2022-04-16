class Solution {
    public int trap(int[] height) {
        int[] pre=height.clone();
        int[] suf=height.clone();
        int n=height.length,sum=0;
        for(int i=1;i<n;i++)
        {
            pre[i]=Math.max(pre[i],pre[i-1]);
            suf[n-i-1]=Math.max(suf[n-i],suf[n-i-1]);
        }
        for(int i=0;i<n;i++) sum+=Math.min(suf[i],pre[i])-height[i];
        return sum;
    }
}
