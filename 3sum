class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Since the array is sorted, no solution exists beyond this point
            if (nums[i] > 0)
                break;

            // Even the two largest numbers cannot make the sum reach zero
            if (nums[i] + nums[n - 2] + nums[n - 1] < 0)
                continue;

            // The smallest possible sum is already greater than zero
            if (nums[i] + nums[i + 1] + nums[i + 2] > 0)
                break;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicate values for the second element
                    while (left < right && nums[left] == nums[left + 1])
                        left++;

                    // Skip duplicate values for the third element
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return ans;
    }
};
