data BookInfo = Book Int String [String]
                deriving (Show)

data MagazineInfo = Magazine Int String [String]
                  deriving (Show)

myInfo = Book 0 "Algebra" ["Sienkiewicz", "Mickiewicz"]

type CustomerID = Int
type ReviewBody = String
data BookReview = BookReview BookInfo CustomerID ReviewBody

type BookRecord = (BookInfo, BookReview)
type CardHolder = String
type CardNumber = String
type Address = [String]

data BillingInfo = CreditCard CardNumber CardHolder Address
                 | CashOnDelivery
                 | Invoice CustomerID
                   deriving (Show)

data Customer = Customer {
    customerID      :: CustomerID,
    customerName    :: String,
    customerAddress :: Address
} deriving (Show)

customer1 = Customer 2743234 "J.R.R. Tolkien"
            ["255 Syntax Ct",
             "Milpitas, CA 90210",
             "USA"]

customer2 = Customer {
    customerID      = 2743234,
    customerAddress = ["255 Syntax Ct",
                       "Milpitas, CA 90210",
                       "USA"],
    customerName    = "J.R.R. Tolkien"
}
