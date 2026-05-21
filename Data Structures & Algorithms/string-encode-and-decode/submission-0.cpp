class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(int i =0; i< strs.size(); i++){
            for(int j=0; j<strs[i].size(); j++){
                ans += strs[i][j] + 1;
            }
            ans+='|';
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == '|'){
                ans.push_back(temp);
                temp = "";
                continue;
            }else{
                temp += s[i] - 1;
            }
        }
        return ans;
    }
};
