class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.size();
        int l2 = s2.size();
        int l = 0;
        if(l1 > l2) return false;
        vector<int> s1Freq(26,0);
        vector<int> s2Freq(26,0);
        for (int i = 0; i < l1; i++) {
            s1Freq[s1[i] - 'a']++;
            s2Freq[s2[i] - 'a']++;
        }
        int matches = 0;
        for (int i = 0; i < 26; i++) {
            if (s1Freq[i] == s2Freq[i]) {
                matches++;
            }
        }
        if(matches == 26){
            return true;
        }
        for (int r = l1; r<l2; r++){
            int rb = s2[r] - 'a';
            if(s2Freq[rb] == s1Freq[rb]){
                matches--;
            }else if(s1Freq[rb] - 1 == s2Freq[rb]){
                matches++;
            }
            s2Freq[rb]++;

            
            int lb = s2[l] - 'a';
            if(s1Freq[lb] == s2Freq[lb]) {
                matches--;
            }else if(s1Freq[lb] + 1 == s2Freq[lb]){
                matches++;
            }
            s2Freq[lb]--;
            l++;

            if(matches == 26) return true;

        }
        return false;
    }
};
