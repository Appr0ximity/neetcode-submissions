class Solution {
public:
    string decodeString(string s) {
        string ans = ""; int i = 0;
        while(i<s.size()){
            if(s[i] <= 'z' && s[i]>='a'){
                ans+=s[i];
                i++;
            }else if(s[i] >= '0' && s[i]<='9'){
                ans += resolveBraces(s, i);
            }
        }
        return ans;
    }
    string resolveBraces(string &s, int &i){
        int multiplier = 1;
        stack<char> stack;
        string res = "", temp = "";
        while(s[i] >= '0' && s[i]<='9'){
            temp.push_back(s[i]);
            i++;
        }
        multiplier = stoi(temp);
        stack.push(s[i]);
        i++;
        while(!stack.empty()){
            if(s[i] <= 'z' && s[i]>='a'){
                res +=s[i];
                i++;
            }else if(s[i] == '['){
                stack.push(s[i]);
                i++;
            }else if(s[i] == ']'){
                stack.pop();
                i++;
            }else if(s[i] >= '0' && s[i]<='9'){
                res += resolveBraces(s, i);
            }
        }
        temp = res;
        while(multiplier > 1){
            res += temp;
            multiplier --;
        }
        return res;
    }
};