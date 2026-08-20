class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int l=0; l<nums.size(); l++){
            if(l != 0 && nums[l] == nums[l-1]){
                continue;
            }
            long long t2 = target - nums[l];
            for (int k=l+1; k<nums.size();k++){
                long long t3 = t2 - nums[k];
                if(k!=l+1 && nums[k] == nums[k-1]){
                    continue;
                }
                int i=k+1, j = nums.size()-1;
                while(i<j){
                    if(nums[i] + nums[j] > t3){
                        j--;
                    }else if(nums[i] + nums[j] < t3){
                        i++;
                    }else{
                        ans.push_back({nums[l],nums[i],nums[j],nums[k]});
                        i++;j--;
                        while(i<j && nums[i] == nums[i-1])i++;
                        while(i<j && nums[j] == nums[j+1]) j--;
                    }
                }
            }
        }
        return ans;
    }
};