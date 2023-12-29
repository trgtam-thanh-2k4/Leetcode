class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans(n + m);
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < n && j < m)
        {
            if (nums1[i] <= nums2[j]) 
            {
                ans[k] = nums1[i++];
            }
            else
            {
                ans[k] = nums2[j++];
            }
            k++;
        }
        while (i < n)
        {
            ans[k++] = nums1[i++];
        }
        while (j < m)
        {
            ans[k++] = nums2[j++];
        }
        int mid = (m + n)/2;
        if ((int)ans.size() % 2 != 0) return double(ans[mid]);
        return double((ans[mid] + (double)ans[mid - 1]) / 2);

    }
};