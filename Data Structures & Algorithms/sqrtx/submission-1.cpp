class Solution {
public:
    int mySqrt(int x) {
        int i = 0, j = x;
        long long mid;
        while(i<=j){
            mid = i+ (j-i)/2;
            if(mid * mid > x){
                j = mid - 1;
            }else if(mid * mid < x && (mid + 1)*(mid + 1) <= x){
                i = mid + 1;
            }else{
                return mid;
            }
        }
        return 1;
    }
};