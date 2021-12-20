class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mi=abs(arr[0]-arr[1]);
        vector<vector<int>>ve;
        for(int i=1;i<arr.size();i++)
        {
            if(abs(arr[i]-arr[i-1])<mi)
            {
                mi=abs(arr[i]-arr[i-1]);
                ve.clear();
                ve.push_back({arr[i-1],arr[i]});
            }
            else if(abs(arr[i]-arr[i-1])==mi)
                ve.push_back({arr[i-1],arr[i]});
        }
        return ve;
    }
};
