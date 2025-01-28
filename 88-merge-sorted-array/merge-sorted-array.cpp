class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Pointers for nums1, nums2, and the merged array
        int p1 = m - 1;        // Last valid index in nums1
        int p2 = n - 1;        // Last index in nums2
        int p = m + n - 1;     // Last index in nums1 (combined array)

        // Traverse from the back and merge
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

        // Copy remaining elements from nums2 if any
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
        // Note: No need to handle remaining elements in nums1 as they are already in place
    }
};
