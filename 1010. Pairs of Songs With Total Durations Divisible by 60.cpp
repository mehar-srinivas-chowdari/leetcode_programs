class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>ma;
        vector<int>ve(time.size());
        for(int i=0;i<time.size();i++) ve[i]=60-time[i]%60; 
        //for(auto it:ve) cout<<it<<' ';
        for(auto it:ve) ma[it]++;
        int cnt=0,x,y=0;
        for(int i=0;i<ve.size();i++)
        {
            x=60;
            if(ve[i]%60==0) y++;
            x-=ve[i];
            if(ma[x])
            {
                cnt+=ma[x];
                if(x==ve[i]) cnt--;
                ma[ve[i]]--;
            }
        }
        cnt+=(y*(y-1)/2);
        return cnt;
    }
};
