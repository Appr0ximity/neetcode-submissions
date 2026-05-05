impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut twoSumMap: HashMap<i32, i32> = HashMap::new();
        for (i, &num) in nums.iter().enumerate(){
            let complement = target - num;
            if let Some(&j) = twoSumMap.get(&complement){
                return vec![j , i as i32];
            }
            twoSumMap.insert(num, i as i32);
        }
        return vec![];
    }
}
