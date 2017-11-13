#[derive(Debug)]
struct Rectangle {
    length: u32,
    width: u32,
}

impl Rectangle {
    fn area(&self) -> u32 {
        return self.length * self.width;
    }

    fn can_hold(&self, other: &Rectangle) -> bool {
        return self.length > other.length && self.width > other.width;
    }

    fn square(size: u32) -> Rectangle {
        return Rectangle {length: size, width: size };
    }
}

fn main() {
    // let length1 = 50;
    // let width1 = 30;
    // println!("The area of the rectangle is {} square pixels", area(length1, width1));

    // let rect1 = (50, 30);
    // println!("The area of the rectangle is {} square pixels", area(rect1));

    let rect = Rectangle {
        length: 50,
        width: 30
    };
    println!("The area of the rectangle is {} square pixels", rect.area());
    println!("rect is {:#?}", rect);

    let rect1 = Rectangle { length: 50, width: 30 };
    let rect2 = Rectangle { length: 40, width: 10 };
    let rect3 = Rectangle { length: 45, width: 60 };
    println!("Can rect1 hold rect2? {}", rect1.can_hold(&rect2));
    println!("Can rect1 hold rect3? {}", rect1.can_hold(&rect3));

    let sq = Rectangle::square(3);
}

// fn area(length: u32, width: u32) -> u32 {
//     return length * width;
// }

// fn area(dimensions: (u32, u32)) -> u32 {
//     return dimensions.0 * dimensions.1;
// }

// fn area(rectangle: &Rectangle) -> u32 {
//     return rectangle.length * rectangle.width;
// }
