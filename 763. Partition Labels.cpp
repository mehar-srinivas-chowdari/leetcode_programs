class Solution {
public:
    vector<int> partitionLabels(string s) {
        int i=0;
        vector<int>ve,x={-1,-1};
        vector<vector<int>>vc(26,x);
        for(i=0;i<s.size();i++)
        {
            if(vc[s[i]-97][0]==-1) vc[s[i]-97][0]=i;
            if(vc[s[s.size()-i-1]-97][1]==-1) vc[s[s.size()-i-1]-97][1]=s.size()-i-1;
        }
        sort(vc.begin(),vc.end());
        for(i=0;vc[i][0]==-1;i++);
        vector<vector<int>>tmp(vc.begin()+i,vc.end());
        //for(auto it:tmp) cout<<it[0]<<' '<<it[1]<<'|';
        int ma=tmp[0][0],mi=tmp[0][0];
        for(i=0;i<tmp.size();i++)
        {
            if(tmp[i][0]>ma)
            {
                ve.push_back(ma-mi+1);
                mi=min(tmp[i][0],tmp[i][1]);
                ma=max(tmp[i][0],tmp[i][1]);
            }
            ma=max(ma,max(tmp[i][0],tmp[i][1]));
            mi=min(mi,min(tmp[i][0],tmp[i][1]));
        }
        ve.push_back(ma-mi+1);
        return ve;
    }
};
