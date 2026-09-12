class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for(int i=0; i<asteroids.size(); i++){
            if(ans.size() == 0 || ans.back()*asteroids[i] > 0){
                ans.push_back(asteroids[i]);
            }else if(ans.back()*asteroids[i] < 0){
                if(asteroids[i] > 0) {
                    ans.push_back(asteroids[i]);
                    continue;
                }
                if(abs(ans.back()) < abs(asteroids[i])){
                    ans.pop_back();
                    i--;
                }else if (abs(ans.back()) == abs(asteroids[i])){
                    ans.pop_back();
                }
            }
        }
        return ans;
    }
};