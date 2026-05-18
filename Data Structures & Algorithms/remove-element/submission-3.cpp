class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int changes = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == val){
                nums[i] = 0;
                changes++;
            }
        }
        sort(nums.begin(), nums.end(), greater<int>());
        while(changes != 0){
            nums.pop_back();
            changes--;
        }
        return nums.size();
    }
};