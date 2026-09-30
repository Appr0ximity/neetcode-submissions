class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0, j = 0;
        while((i == 0 && j == 0) || nums[i] != nums[j]){
            i = nums[i];
            j = nums[nums[j]];
        }
        i = 0;
        while(nums[i] != nums[j]){
            i = nums[i];
            j = nums[j];
        }
        return nums[i];
    }
};
