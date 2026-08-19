class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, k=0;
        while(i< nums.size()){
            if(nums[i] <= nums[k]){
                i++;
                continue;
            }
            else{
                if(k< nums.size()){
                    nums[++k] = nums[i];
                }
            }
        }
        return k+1;
    }
};