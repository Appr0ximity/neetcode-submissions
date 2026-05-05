class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1){
            return strs[0];
        }
        sort(strs.begin(), strs.end());
        string ans = strs[0];
        while(ans.size() > 0){
            for (int i =1; i<strs.size(); i++){
                if(ans == strs[i].substr(0, ans.size())){
                    return ans;
                }
                ans.pop_back();
            }
        }
        return ans;
    }
};