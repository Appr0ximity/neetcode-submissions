class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0, i=0, j=heights.size() - 1;
        while(i<j){
            maxWater = max(maxWater, min(heights[i],heights[j])*(j-i));
            if(heights[i] < heights[j]){
                i++;
                continue;
            }else{
                j--;
                continue;
            }
        }
        return maxWater;

    }
};
