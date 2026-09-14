class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pairVec;
        for(int i=0; i<position.size(); i++)
            pairVec.push_back({position[i], speed[i]});
        sort(pairVec.begin(), pairVec.end());

        vector<double> times(pairVec.size(), 0);
        for(int i=0; i<pairVec.size(); i++){
            times[i] = (double)(target-pairVec[i].first)/pairVec[i].second;
        }

        int ans = 0; double prevTime = 0;
        for(int i=times.size() - 1; i>=0; i--){
            if(prevTime < times[i]){
                ans++;
                prevTime = times[i];
            }
        }
        return ans;
    }
};
