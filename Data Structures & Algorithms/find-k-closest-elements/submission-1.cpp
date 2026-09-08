class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low = 0, high = arr.size()-1;
        while(low < high){
            int mid = (low+high)/2;
            if(arr[mid] < x){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        low = low - 1;
        high = low + 1;
        while(high - low - 1 < k){
            if(low < 0){
                high++;
            }else if(high >= arr.size()){
                low--;
            }else if(abs(x-arr[low]) <= abs(x-arr[high])){
                low--;
            }else {
                high++;
            }
        }
        vector<int> ans(arr.begin()+low+1, arr.begin()+high);
        return ans;
    }
};