class Solution {
public:
    bool isPalindrome(string s) {
        string pali;
        pali = regex_replace(s, regex("[^A-Za-z0-9]"), "");
        int i=0, j = pali.size() - 1;
        while(i<=j){
            if (tolower((unsigned char)pali[i]) != tolower((unsigned char)pali[j])){
                return false;
            }
            i++;j--;
        }
        return true;
    }
};
