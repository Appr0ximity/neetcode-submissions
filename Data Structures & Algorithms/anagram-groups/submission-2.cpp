class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> anagrams;
        for (int i=0; i<strs.size(); i++){
            vector<int> counter(26,0);
            for(int j=0; j<strs[i].size(); j++){
                counter[strs[i][j]-97]++;
            }
            anagrams[counter].push_back(strs[i]);
        }
        for (auto i : anagrams){
            ans.push_back(i.second);
        }
        return ans;
    }
};
