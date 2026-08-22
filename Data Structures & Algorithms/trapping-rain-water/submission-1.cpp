class Solution {
public:
    int trap(vector<int>& height) {
        vector<vector<int>> info;
        int maxSoFar = 0, totalWater=0;
        for(int i=0; i<height.size(); i++){
            info.push_back({maxSoFar});
            maxSoFar = max(maxSoFar, height[i]);
        }
        maxSoFar = 0;
        for(int i = height.size()-1; i>=0; i--){
            info[i].push_back(maxSoFar);
            maxSoFar = max(maxSoFar, height[i]);
        }
        for(int i=0; i<height.size()-1; i++){
            if(info[i][0] > height[i] && info[i][1] > height[i]){
                totalWater += min(info[i][0],info[i][1]) - height[i];
            }
        }
        return totalWater;
    }
};
