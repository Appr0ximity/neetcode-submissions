class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0, j = 0;
        bool isW1 = true;
        while(i< word1.size() || j < word2.size()){
            if(isW1 && i<word1.size()){
                ans += word1[i];
                if(j<word2.size()){
                    isW1 = !isW1;
                }
                i++;
            }else if(!isW1 && j<word2.size()){
                ans += word2[j];
                if(i<word1.size()){
                    isW1 = !isW1;
                }
                j++;
            }
        }
        return ans;
    }
};