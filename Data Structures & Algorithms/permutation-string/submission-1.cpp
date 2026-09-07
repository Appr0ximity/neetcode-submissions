class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.size();
        int l2 = s2.size();
        if(l1 > l2) return false;
        int l = 0;
        vector<int> s1Freq(26,0);
        for(char c: s1){
            s1Freq[c - 'a']++;
        }
        vector<int> s2Freq(26,0);
        for (int i=0; i<l1-1; i++){
            s2Freq[s2[i] - 'a']++;
        }
        for(int r = l1-1; r<l2; r++){
            s2Freq[s2[r] -'a']++;
            if(s1Freq == s2Freq){
                return true;
            }
            s2Freq[s2[l] - 'a']--;
            l++;
        }
        return false;
    }
};
