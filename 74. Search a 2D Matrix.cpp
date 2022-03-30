class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int mid,l=0,h=matrix[0].size(),i=0;
        for(i=0;i<matrix.size();i++)
            if(target<=matrix[i][matrix[0].size()-1]) break;
        while(l<=h and i<matrix.size())
        {
            mid=(l+h)/2;
            if(matrix[i][mid]==target) return true;
            else if(matrix[i][mid]<target) l=mid+1;
            else h=mid-1;
        }
        return false;
    }
};
