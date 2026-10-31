class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> merged;
        merged.insert(merged.end(), nums1.begin(), nums1.end());
        merged.insert(merged.end(), nums2.begin(), nums2.end());
        
        std::sort(merged.begin(), merged.end());
        
        int totalSize = merged.size();
        
        if (totalSize % 2 == 1) {
            return static_cast<double>(merged[totalSize / 2]);
        } else {
            int mid1 = totalSize / 2 - 1;
            int mid2 = totalSize / 2;
            return static_cast<double>(merged[mid1] + merged[mid2]) / 2.0;
        }
    }
};