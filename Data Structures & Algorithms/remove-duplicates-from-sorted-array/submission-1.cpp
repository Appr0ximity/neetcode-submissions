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
                    int temp = nums[k+1];
                    nums[k+1] = nums[i];
                    nums[i] = temp;
                    k++;
                }
            }
        }
        return k+1;
    }
};