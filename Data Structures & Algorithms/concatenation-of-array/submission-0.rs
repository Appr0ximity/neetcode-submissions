impl Solution {
    pub fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
        if nums.len() == 0{
            return vec![];
        }
        let n = nums.len();
        let mut ans = vec![0; n * 2];
        for (i, a) in nums.iter().enumerate() {
            ans[i] = a.clone();
            ans[i + n] = a.clone();
        }
        return ans;
    }
}
