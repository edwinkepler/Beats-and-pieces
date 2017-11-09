const MAX_POINTS: u32 = 100000;

fn main() {
    let mut x = 5;
    println!("The value of x is: {}", x);
    x = 6;
    println!("The value of x is: {}", x);

    let y = 5;
    let y = y + 1;
    let y = y * 2;
    println!("The value of y is: {}", y);

    println!("The value of const MAX_POINTS is: {}", MAX_POINTS);

    let spaces = "     ";
    let spaces = spaces.len();

    let tup = (500, 6.4, 1);
    let (a, b, c) = tup;

    println!("The value of a is: {}", a);

    let tup_2: (i32, f64, u8) = (500, 6.4, 1);
    let five_hundred = tup_2.0;
    let six_point_four = tup_2.1;
    let one = tup_2.2;
}
