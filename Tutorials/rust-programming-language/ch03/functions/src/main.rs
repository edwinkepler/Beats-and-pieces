fn main() {
    println!("Hello, world!");

    another_function();
    yet_another_function(5);
    yet_another_function_2(5, 2);

    let x = five();
    let y = {
        let x = 3;
        x + 1
    };
    println!("The value of y is: {}", y);

    let z = plus_one(5);
    println!("The value of z is: {}", z);
}

fn plus_one(x: i32) -> i32 {
    x + 1
}

fn five() -> i32 {
    5
}

fn another_function() {
    println!("Another function!");
}

fn yet_another_function(x: i32) {
    println!("The value of x is: {}", x);
}

fn yet_another_function_2(x: i32, y: i32) {
    println!("The value of x is: {}, y: {}", x, y);
}
