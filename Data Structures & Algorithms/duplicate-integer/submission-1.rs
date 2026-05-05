impl Solution {
    pub fn has_duplicate(nums: Vec<i32>) -> bool {
        let mut nums_hash = HashMap::new();
        for num in nums {
            if nums_hash.insert(num, 0).is_some(){
                return true;
            }
        }
        return false;
    }
}
