class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxL = *max_element(piles.begin(), piles.end());
        if(h == piles.size()) return maxL;
        int i = 1, j = maxL, mid;
        while(i<=j){
            mid = i+(j-i)/2;
            if(countHours(mid, piles) > h){
                i = mid + 1;
            }else{
                j = mid - 1;
            }
        }
        return i;
    }
    int countHours(int k, vector<int> &piles){
        if(k == 0) return INT_MAX;
        int hours = 0;
        for(int i =0; i<piles.size(); i++){
            hours += ceil((double)piles[i]/k);
        }
        return hours;
    }
};
