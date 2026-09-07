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
        for(int r = l1; r<l2; ){
            if(matches == 26){
                return true;
            }
            if(s1Freq[s2[l] - 'a'] == s2Freq[s2[l] - 'a']) {
                matches--;
            }else if(s1Freq[s2[l] - 'a'] + 1 == s2Freq[s2[l] - 'a']){
                matches++;
            }
            s2Freq[s2[l] - 'a']--;
            l++;

            if(s1Freq[s2[r] -'a'] == s2Freq[s2[r] - 'a']) {
                matches--;
            }else if(s1Freq[s2[r] -'a'] - 1 == s2Freq[s2[r] - 'a']){
                matches++;
            }
            s2Freq[s2[r] - 'a']++;
            r++;
        }
        if(matches == 26){
            return true;
        }
        return false;
    }
};
