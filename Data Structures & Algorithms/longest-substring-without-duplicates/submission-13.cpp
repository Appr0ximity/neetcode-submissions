class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0){
            return 0;
        } 
        unordered_map<char, int> mp;
        int left = 0, right = 0;
        int ans = 1;
        for(; right<s.size(); right++){
            if(mp.find(s[right]) != mp.end()){
                left = max(left, mp[s[right]]+1);
            }
            mp[s[right]] = right;
            ans = max(ans, right - left+1);
        }
        return ans;
    }
};