class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        map<int, int> tracker;
        int ans = 1;
        for(int i=0; i<nums.size(); i++){
            tracker[nums[i]] = 1;
        }
        for(auto i : tracker){
            if(tracker.find(i.first - 1) != tracker.end()){
                tracker[i.first] = tracker[i.first - 1] + 1;
                ans = max(ans, tracker[i.first]);
            }
        }
        return ans;
    }
};
