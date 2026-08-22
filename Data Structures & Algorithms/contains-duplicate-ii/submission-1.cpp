class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0) return false;
        while(k>0){
            int i=0, j=i+k;
            while(j<nums.size()){
                if(nums[i] == nums[j]){
                    return true;
                }
                i++;j++;
            }
            k--;
        }
        return false;
    }
};