class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>ve(nums.size(),0);
        for(auto it:nums)
            if(ve[it]) return it;
            else ve[it]++;
        return 0;
    }
};
