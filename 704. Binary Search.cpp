class Solution {
public:
    int search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int l=0,h=nums.size()-1,mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid]==target) return mid;
            else if(target<nums[mid]) h=mid-1;
            else l=mid+1;
        }
        return -1;
    }
};
