class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 0, j = nums.size() - 1, mid;
        if(nums[0] < nums[j]) return nums[0];
        while(i < j){
            mid = (i+j)/2;
            if(nums[mid] >= nums[0]){
                i = mid + 1;
            }else{
                j = mid;
            }
        }
        return nums[i];
    }
};
