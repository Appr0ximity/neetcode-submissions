class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                nums[i] = 0;
            }
        }
        for(int i=0; i<nums.size(); i++){
            int val = abs(nums[i]);
            if(1 <= val && val<= nums.size()){
                if (nums[val - 1] > 0){
                    nums[val-1] *= -1;
                }else if(nums[val-1] == 0){
                    nums[val-1] = -(nums.size() + 1);
                }
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= 0 )
                return i+1;
        }
        return nums.size()+1;
    }
};