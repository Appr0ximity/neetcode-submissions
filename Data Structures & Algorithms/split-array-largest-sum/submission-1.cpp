class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int ans = INT_MAX;
        int i = *max_element(nums.begin(), nums.end());
        int j = accumulate(nums.begin(), nums.end(), 0), mid;
        while(i<=j){
            mid = (i+j)/2;
            if(feasible(nums, k, mid)){
                j = mid - 1;
            }else{
                i = mid + 1;
            }
        }
        return i;
    }
    bool feasible(vector<int> &nums, int k, int mid){
        int splits = 1, tempSum = 0;
        for(int i=0; i<nums.size(); i++){
            tempSum += nums[i];
            if(tempSum > mid){
                tempSum = 0;
                splits++;
                i--;
            }
        }
        return splits <= k;
    }
};