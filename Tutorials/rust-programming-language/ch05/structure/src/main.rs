fn main() {
    struct User {
        username: String,
        email: String,
        sign_in_count: u64,
        active: bool,
    }

    let mut user1 = User {
        email: String::from("example@example.com"),
        username: String::from("example1"),
        active: true,
        sign_in_count: 1,
    };

    println!("{}", user1.email);
    user1.email = String::from("test@test.com");

    let user2 = User {
        email: String::from("another@example.com"),
        username: String::from("anorhername1"),
        ..user1
    };

    fn build_user(email: String, username: String) -> User {
        return User {
            email,
            username,
            active: true,
            sign_in_count: 1,
        }
    }
}
