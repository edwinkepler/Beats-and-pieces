#![allow(unused_variables)]
fn main() {
    let v: Vec<i32> = Vec::new();

    let vv = vec![1, 2, 3];
    let third: &i32 = &vv[2];
    let third: Option<&i32> = vv.get(2);

    let mut vvv = Vec::new();
    vvv.push(5);
    vvv.push(6);
    vvv.push(7);
    vvv.push(8);

    println!("{}", vvv[1]);

    #[derive(Debug)]
    enum SpreadsheetCell {
        Int(i32),
        Float(f64),
        Text(String),
    }

    let row = vec![
        SpreadsheetCell::Int(3),
        SpreadsheetCell::Text(String::from("Hello, world")),
        SpreadsheetCell::Float(19.12),
    ];

    println!("{:?}", row[1]);
}
