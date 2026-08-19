class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int k = 0; k < nums.size(); k++) {
            if (k != 0 && nums[k] == nums[k-1]) continue;   // skip repeated fixed element

            int i = k+1, j = nums.size()-1, target = -nums[k];
            while (i < j) {
                int sum = nums[i] + nums[j];
                if (sum > target) {
                    j--;
                } else if (sum < target) {
                    i++;
                } else {
                    ans.push_back({nums[k], nums[i], nums[j]});
                    i++; j--;
                    while (i < j && nums[i] == nums[i-1]) i++;   // skip repeated left value
                    while (i < j && nums[j] == nums[j+1]) j--;   // skip repeated right value
                }
            }
        }
        return ans;
    }
};