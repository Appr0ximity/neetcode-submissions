class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if (nums.size() == 0) return {};
        if (nums.size() == 1) return nums;
        if (nums.size() == 2) {
            if (nums[0] == nums[1]) return {nums[0]};
            return nums;
        }
        vector<int> ans;
        int first=0, second=0, firstCount=0, secondCount=0;
        for (int i=0; i<nums.size(); i++){
            if(nums[i] == first){
                firstCount ++;
            }else if(nums[i] == second){
                secondCount ++;
            }else if (firstCount == 0){
                first = nums[i];
                firstCount = 1;
            }else if(secondCount == 0){
                second = nums[i];
                secondCount ++;
            }else{
                firstCount --; secondCount --;
            }
        }
        firstCount = 0; secondCount = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == first){
                firstCount ++;
            }else if(nums[i] == second){
                secondCount ++;
            }
        }
        if(firstCount > (double)nums.size()/3){
            ans.push_back(first);
        }
        if(secondCount > (double)nums.size()/3){
            ans.push_back(second);
        }

        return ans;
    }
};