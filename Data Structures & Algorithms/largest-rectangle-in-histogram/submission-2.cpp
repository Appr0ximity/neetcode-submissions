class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> st;
        int maxArea = 0;
        for(int i=0; i<heights.size(); i++){
            if(st.empty() || (st.top().second <= heights[i])){
                st.push({i,heights[i]});
            }else{
                pair<int,int> lastPopped;
                while(!st.empty() && st.top().second > heights[i]){
                    lastPopped = st.top();
                    maxArea = max(maxArea,lastPopped.second*(i-lastPopped.first));
                    st.pop();
                }
                st.push({lastPopped.first, heights[i]});
            }
        }
        while (!st.empty()) {
            int index = st.top().first;
            int height = st.top().second;
            maxArea = max(maxArea, height * (static_cast<int>(heights.size()) - index));
            st.pop();
        }
        return maxArea;
    }
};
