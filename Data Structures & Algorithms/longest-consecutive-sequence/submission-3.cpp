class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        unordered_map<int, int> tracker;
        int ans = 1;
        for(int i=0; i<nums.size(); i++){
            tracker[nums[i]] = 1;
        }
        for(int i =0; i<nums.size(); i++){
            if(tracker.find(nums[i] - 1) == tracker.end()){
                int k = nums[i];
                int consec = 0;
                while(tracker.find(k) != tracker.end()){
                    consec++;
                    k++;
                    ans = max(consec, ans);
                }
            }
        }
        return ans;
    }
};
