class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n,'a');
        k-=n;
        for(int i=s.size()-1;k>0;i--)
        {
            if(k/25) s[i]='z';
            else s[i]=k+97;
            k-=25;
        }
        return s;
    }
};
