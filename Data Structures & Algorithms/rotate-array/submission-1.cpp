class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(),nums.begin()+(ptrdiff_t)k);
        reverse(nums.begin()+(ptrdiff_t)k, nums.end());
    }
};