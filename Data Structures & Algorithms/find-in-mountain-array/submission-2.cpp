/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int i = 0, j = n - 1, mid;
        while(i<=j){
            mid = (i+j)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                i = mid +1;
            }else {
                j = mid - 1;
            }
        }
        int peak = i, ans = -1;
        i = 0; j = peak;
        while(i<=j){
            mid = (i+j)/2;
            if(mountainArr.get(mid) < target){
                i = mid +1;
            }else {
                j = mid - 1;
            }
        }
        if(mountainArr.get(i) == target) ans = i;
        i = peak, j = n - 1;
        while(i<=j){
            mid = (i+j)/2;
            if(mountainArr.get(mid) > target){
                i = mid +1;
            }else {
                j = mid - 1;
            }
        }
        if(i < n && mountainArr.get(i) == target && ans == -1) ans = i;
        return ans;
    }
};