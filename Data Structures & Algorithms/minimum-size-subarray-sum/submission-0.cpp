class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int l = 0, sum = 0, r;
        for(r = 0; r<nums.size(); r++){
            sum += nums[r];
            if(sum >= target){
                ans = min(ans, r-l+1);
            }
            while(l<r && sum >= target){
                sum -= nums[l];
                l++;
                if(sum >= target){
                    ans = min(ans, r-l+1);
                }
            }
        }
        if(sum >= target){
            ans = min(ans, r-l+1);
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};