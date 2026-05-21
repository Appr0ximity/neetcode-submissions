class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums)
            count[num]++;
        vector<vector<int>> freq(nums.size() +1);
        for(auto& entry: count){
            freq[entry.second].push_back(entry.first);
        }
        vector<int> ans;
        for( int i=freq.size() - 1; i>=0; i--){
            for(int j = 0; j<freq[i].size(); j++){
                ans.push_back(freq[i][j]);
                if(ans.size() == k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
