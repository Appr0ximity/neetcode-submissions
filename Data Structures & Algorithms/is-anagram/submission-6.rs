impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        if s.len() != t.len() {
            return false;
        }
        let mut hash_1 = HashMap::new();
        let mut hash_2 = HashMap::new();
        for (i,a) in s.chars().enumerate(){
            *hash_1.entry(a).or_insert(0) += 1;
            *hash_2.entry(t.chars().nth(i).unwrap()).or_insert(0) += 1;
        }
        return hash_1 == hash_2;
    }
}
