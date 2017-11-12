fn main() {
    let mut s = String::from("Hello");
    s.push_str(", world!");
    println!("{}", s);

    let s1 = String::from("Hello");
    let s2 = s1.clone();
    println!("s1: {}, s2: {}", s1, s2);

    takes_ownership(s);

    let x = 5;
    makes_copy(x);

    let _s1 = gives_ownership();
    let _s2 = String::from("Hello");
    let _s3 = takes_and_gives_back(_s2);

    let s5 = String::from("Hello");
    let (s6, len) = calculate_length(s5);
    println!("The length of '{}' is {}", s6, len);
}

fn gives_ownership() -> String {
    let some_string = String::from("Hello");
    return some_string;
}

fn takes_and_gives_back(some_string: String) -> String {
    return some_string;
}

fn takes_ownership(str: String) {
    println!("{}", str);
}

fn makes_copy(int: i32) {
    println!("{}", int);
}

fn calculate_length(s: String) -> (String, usize) {
    let length = s.len();
    return (s, length);
}
