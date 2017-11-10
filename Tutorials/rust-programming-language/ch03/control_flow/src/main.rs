fn main() {
    let num = 6;

    if num < 5 {
        println!("consition was true");
    } else {
        println!("condition was false");
    }

    if num != 0 {
        println!("number was something else then zero");
    }

    if num % 4 == 0 {
        println!("number in divisible by 4");
    } else if num % 3 == 0 {
        println!("number is divisible by 3");
    } else if num % 2 == 0 {
        println!("number is divisible by 2");
    } else {
        println!("number is not divisible by 4, 3 or 2")
    }

    let condition: bool = true;
    let mut number = if condition {
        5
    } else {
        6
    };

    println!("The value of number is {}", number);

    while number != 0 {
        println!("{}!", number);
        number = number - 1;
    }
    println!("LIFTOFF!!!");

    let a = [10, 20, 30, 40, 50];
    let mut index = 0;

    while index < 5 {
        println!("the value is: {}", a[index]);
        index = index + 1;
    }

    for element in a.iter() {
        println!("the value is: {}", element);
    }

    for number in (1..4).rev() {
        println!("{}!", number);
    }
    println!("LIFTOFF!!!")
}
