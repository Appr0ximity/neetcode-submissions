class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low = 0, high = arr.size()-1;
        int mid;
        while(low < high){
            mid = (low+high)/2;
            if(arr[mid] > x){
                high = mid - 1;
            }else if(arr[mid] < x){
                low = mid+1;
            }else{
                break;
            }
        }
        mid = (low+high)/2;
        if (mid > 0 && abs(x - arr[mid-1]) <= abs(x - arr[mid])) {
            mid--;
        }
        if (mid < (int)arr.size()-1 && abs(x - arr[mid+1]) < abs(x - arr[mid])) {
            mid++;
        }
        low = mid;
        high = mid;
        while(high - low + 1 != k){
            if(low == 0){
                while(high - low + 1 != k){
                    high++;
                }
                if (high - low + 1 == k) continue;
            }else if(high == arr.size() - 1){
                while(high - low + 1 != k){
                    low--;
                }
                if(high - low + 1 == k) continue;
            }
            if(abs(x-arr[low-1]) <= abs(x-arr[high+1])){
                low--;
            }else if(abs(x-arr[low-1]) > abs(x-arr[high+1])){
                high++;
            }
        }
        vector<int> ans(arr.begin()+low, arr.begin()+high+1);
        return ans;
    }
};