class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        // Sort the vector in ascending order
        std::sort(nums.begin(), nums.end());
        
        // Return the Kth element from the end
        return nums[nums.size() - k];
    }
};
