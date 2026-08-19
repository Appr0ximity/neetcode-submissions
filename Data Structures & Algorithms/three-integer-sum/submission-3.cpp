class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int k=0; k<nums.size(); k++){
            if(k!=0 && nums[k] == nums[k-1]){
                continue;
            }
            vector<int> temp;
            int i=k+1, j=nums.size()-1, target = -1*nums[k];
            while(i<j){
                if(nums[i] + nums[j] > target){
                    while(j >0 && nums[j-1] == nums[j]){
                        j--;
                    }
                    j--;
                }
                else if(nums[i] + nums[j] < target){
                    while(i< nums.size()-1 && nums[i+1] == nums[i]){
                        i++;
                    }
                    i++;
                }else{
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    while(j>0 && nums[j-1] == nums[j]){
                        j--;
                    }
                    while(i< nums.size()-1 && nums[i+1] == nums[i]){
                        i++;
                    }
                    i++; j--;
                    temp.clear();
                }
            }
        }
        return ans;
    }
};
