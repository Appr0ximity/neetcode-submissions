class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        map<int, int> prefixSum;
        prefixSum[0] ++;
        int sum = 0;
        for (int x : nums) {
            sum += x;
            ans += prefixSum[sum - k];
            prefixSum[sum]++;
        }
        return ans;

    }
};