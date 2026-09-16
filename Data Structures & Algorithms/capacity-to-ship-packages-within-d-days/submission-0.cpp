class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int j = accumulate(weights.begin(), weights.end(), 0);
        int i = *max_element(weights.begin(), weights.end());
        if(1 == days) return j;
        int mid;
        while(i<=j){
            mid = i + (j-i)/2;
            if(countDays(mid, weights) > days){
                i = mid + 1;
            }else{
                j = mid - 1;
            }
        }
        return i;
    }
    int countDays(int capacity, vector<int> &weights){
        int ans = 0, i=0, curr = 0;
        while(i<weights.size()){
            curr += weights[i];
            if(curr > capacity){
                curr = 0;
                ans += 1;
            }else i++;
        }
        return ans+1;
    }
};