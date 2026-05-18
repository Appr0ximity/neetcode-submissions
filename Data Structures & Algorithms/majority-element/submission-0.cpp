class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityEl;
        int count=0;
        majorityEl = nums[0];
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == majorityEl){
                count++;
            }else{
                count --;
                if(count<0){
                    majorityEl = nums[i];
                    count = 1;
                }
            }
        }
        return majorityEl;
    }
};