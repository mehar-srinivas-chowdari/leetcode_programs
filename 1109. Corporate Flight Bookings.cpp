class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ve(n,0);
        for(int i=0;i<bookings.size();i++)
        {
            ve[bookings[i][0]-1]+=bookings[i][2];
            if(bookings[i][1]<n) ve[bookings[i][1]]-=bookings[i][2];
        }
        for(int i=1;i<ve.size();i++)
        {
            ve[i]=ve[i-1]+ve[i];
        }
        return ve;
    }
};
