class Solution {
public:
    bool isPali(string s, int index){
        int i=0, j = s.size() -1;
        while(i<=j){
            if(i == index){
                i++;
                continue;
            }else if(j == index){
                j--;
                continue;
            }
            if(s[i] != s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        bool flag=true;
        int i=0, j = s.size() -1;
        while(i<=j){
            if(s[i] != s[j]){
                return isPali(s, i) || isPali(s, j);
            }
            i++;j--;
        }
        return true;
    }
};