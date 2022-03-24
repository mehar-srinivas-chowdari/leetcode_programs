class Solution {
public:
    int numRescueBoats(vector<int>& pe, int lim) {
        sort(pe.begin(),pe.end());
        int ans=0,i,j=pe.size()-1;
        for(i=0;i<j;)
        {
            if(pe[i]+pe[j]<=lim) 
            {
                i++;
                j--;
            }
            else j--;
            ans++;
        }
        //for(auto it:pe) cout<<it<<' ';
        //cout<<i<<' '<<j;
        if(i==j) ans++;
        return ans;
    }
};
