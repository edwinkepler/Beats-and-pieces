#![allow(unused_variables)]
fn main() {
    let mut s = String::new();

    let data = "initital contents";
    let ss = data.to_string();
    let sss = "initial contents".to_string();
    let ssss = String::from("initial contents");

    let mut hello = String::from("السلام عليكم");
    hello = String::from("Dobrý den");
    hello = String::from("Hello");
    hello = String::from("שָׁלוֹם");
    hello = String::from("नमस्ते");
    hello = String::from("こんにちは");
    hello = String::from("안녕하세요");
    hello = String::from("你好");
    hello = String::from("Olá");
    hello = String::from("Здравствуйте");
    hello = String::from("Hola");

    let mut a = String::from("foo");
    a.push_str("bar");

    let mut s1 = String::from("foo");
    let s2 = "bar";
    s1.push_str(&s2);
    println!("s2 is {}", s2);

    let mut b = String::from("lo");
    b.push('l');

    let ss1 = String::from("Hello");
    let ss2 = String::from(", world!");
    let ss3 = s1 + &s2;
}

fn concatenate() {
    let s1 = String::from("tic");
    let s2 = String::from("tac");
    let s3 = String::from("toe");

    let s = s1 + "-" + &s2 + "-" + &s3;
}

fn format() {
    let s1 = String::from("tic");
    let s2 = String::from("tac");
    let s3 = String::from("toe");

    let s = format!("{}-{}-{}", s1, s2, s3);
}