fn main() {
    enum IpAddrKind {
        V4,
        V6,
    }

    struct IpAddr {
        kind: IpAddrKind,
        address: String,
    }

    let _home = IpAddr {
        kind: IpAddrKind::V4,
        address: String::from("127.0.0.1"),
    };

    let _loopback = IpAddr {
        kind: IpAddrKind::V6,
        address: String::from("::1"),
    };

    let _four = IpAddrKind::V4;
    let _six = IpAddrKind::V6;

    fn route(ip_type: IpAddrKind) {

    }

    route(IpAddrKind::V4);
    route(IpAddrKind::V6);

    enum IpAddress {
        V4(u8, u8, u8, u8),
        V6(String),
    }

    let home = IpAddress::V4(127, 0, 0, 1);
    let loopback = IpAddress::V6(String::from("::1"));

    enum Message {
        Quit,
        Move {x: i32, y: i32},
        Write(String),
        ChangeColor(i32, i32, i32),
    }

    impl Message {
        fn call(&self) {

        }
    }

    let m = Message::Write(String::from("Hello"));
    m.call();

    enum Option<T> {
        Some(T),
        None,
    }

    let some_number = Some(5);
    let some_string = Some("a string");
    // let absent_number: Option<i32> = None;
}
