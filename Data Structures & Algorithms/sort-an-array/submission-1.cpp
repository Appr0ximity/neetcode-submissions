class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
    void quickSort(vector<int>& nums, int low, int high){
        if(low< high){
            int part = partition(nums, low, high);
            quickSort(nums, part+1, high);
            quickSort(nums, low, part-1);
        }
    }
    int partition(vector<int>& nums, int low, int high){
        int pivot = nums[low];
        int i = low;
        int j = high;
        while(i<j){
            while(nums[i] <= pivot && i< high){
                i++;
            }
            while(nums[j] >= pivot && j>low){
                j--;
            }
            if(i<j){
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    }
};