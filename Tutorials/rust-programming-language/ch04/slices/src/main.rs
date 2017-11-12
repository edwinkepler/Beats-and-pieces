fn main() {
    let mut s = String::from("hello world");
    let word = first_word(&s[..]);
    // s.clear();
    println!("{}", word);

    let len = s.len();

    let hello = &s[0..5];
    let world = &s[6..11];
    let slice1 = &s[..2];
    let slice2 = &s[3..len];
    let slice3 = &s[3..];
    let slice4 = &s[..];
}

fn first_word(s: &str) -> &str {
    let bytes = s.as_bytes();
    for (i, &item) in bytes.iter().enumerate() {
        if item == b' ' {
            return &s[0..i];
        }
    }
    return &s[..];
}
