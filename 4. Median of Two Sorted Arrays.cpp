class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size(),l2=nums2.size();
        int i=0,j=0,inc=0,x=1,k=0;
        int n=l1+l2;
        int arr[n];
        if(n%2)
            x=0;
        while((i<l1 and j<l2) and (i+j)<=((n/2)+1))
        {
            if(nums1[i]>nums2[j])
                arr[k++]=nums2[j++];
            else if(nums1[i]<=nums2[j])
                arr[k++]=nums1[i++];
        }
        while((i<l1) and i+j <= (n/2)+1)
        {
            arr[k++]=nums1[i++];
        }
        while((j<l2) and i+j <= (n/2)+1)
        {
            arr[k++]=nums2[j++];
        }
        if(n%2==0)
        {
            return (arr[(n/2)-1]+arr[n/2])/2.0;
        }
        return arr[n/2];
    }
};
