impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        sorted_chars(&s) == sorted_chars(&t)
    }
}

fn sorted_chars(s: &str) -> String {
    let mut chars: Vec<char> = s.chars().collect();
    chars.sort_unstable();
    chars.into_iter().collect()
}
