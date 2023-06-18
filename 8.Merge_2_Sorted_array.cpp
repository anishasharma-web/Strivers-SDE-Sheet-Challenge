class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ml=m-1,nl=n-1;
        int t=m+n-1;
        for(int i=m+n-1; i> 0  and ml>=0 and nl>=0;i--)
        {
            if(nums1[ml]>=nums2[nl])
            {
                nums1[t]=nums1[ml];
                ml--;
                t--;
            }
            else
            {
                nums1[t]=nums2[nl];
                nl--;
                t--;
            }
        }
        while(nl>=0)
            {
                nums1[t--]=nums2[nl--];
            }
    }
};
