class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> charFreq(26,0);
        int maxFreq = 0, ans = 0, l = 0;
        for (int r = 0; r<s.size(); r++){
            charFreq[s[r] - 'A']++;
            maxFreq = max(maxFreq, charFreq[s[r] - 'A']);

            while(r-l+1 - maxFreq > k){
                charFreq[s[l] - 'A']--;
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
