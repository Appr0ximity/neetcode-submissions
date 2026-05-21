class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long product = 1;
        int zero_count = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 0 && zero_count == 0){
                zero_count ++;
            }else if(nums[i] == 0){
                product = 0;
            }else{
                product *= nums[i];
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(zero_count > 1 || (nums[i] !=0 && zero_count >= 1)){
                nums[i] = 0;
            }else if (nums[i] == 0 && zero_count == 1){
                nums[i] = product;
            }else{
                nums[i] = product/nums[i];
            }
        }
        return nums;
    }
};
