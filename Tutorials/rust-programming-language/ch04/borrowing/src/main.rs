fn main() {
    let s1 = String::from("Hello");
    let len = calculate_length(&s1);
    println!("The length of '{}' is {}", s1, len);

    let mut s = String::from("Hello");
    change(&mut s);
    println!("{}", s);
}

fn calculate_length(s: &String) -> usize {
    return s.len();
}

fn change(s: &mut String) {
    s.push_str(", world");
}
