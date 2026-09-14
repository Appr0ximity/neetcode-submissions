class Solution {
public:
    string simplifyPath(string path) {
        vector<string> directories;
        int i=0;
        while(i<path.size()){
            if(path[i] == '/'){
                i++;
                continue;
            }else{
                string temp = "";
                while(i < path.size() && path[i] != '/'){
                    temp += path[i];
                    i++;
                }
                if(temp == ".."){
                    if(!directories.empty())
                        directories.pop_back();
                }else if(temp == "."){
                }else{
                    directories.push_back(temp);
                }
            }
        }
        string ans = "/";
        for(int i=0; i<directories.size(); i++){
            ans += directories[i];
            ans.push_back('/');
        }
        if(!(ans.size() == 1)){
            ans.pop_back();
        }
        return ans;
    }
};