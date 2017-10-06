-- http://learnyouahaskell.com/syntax-in-functions#pattern-matching
lucky :: (Integral a) => a -> String -- typeclass Integral contains Int and Integer
lucky 7 = "Lucky number seven!"
lucky x = "Sorry, you are out of luck, pal!"

lucky' :: Double -> String -- function above will not work with Double
lucky' 7.0 = "You lucky!"
lucky' x = "Not today bro"

luckyInt :: Int -> String
luckyInt 7 = "You lucky!"
luckyInt x = "Not today bro"

luckyInteger :: Integer -> String
luckyInteger 7 = "You lucky with a Integer"
luckyInteger x = "You out of luck"

luckyNum :: Int -> String
luckyNum x = if x == 7 then "Lucky!" else "Not lucky"

sayMe :: (Integral a) => a -> String
sayMe 1 = "One"
sayMe 2 = "Two"
sayMe 3 = "Three"
sayMe 4 = "Four"
sayMe 5 = "Five"
sayMe x = "Not in a list"

factorial :: (Integral a) => a -> a
factorial 0 = 1
factorial x = x * factorial (x - 1)

factorial' x = product [1..x]

charName :: Char -> String
charName 'a' = "Albert"
charName 'b' = "Bob"

charName' :: Char -> String
charName' 'a' = "Albert"
charName' 'b' = "Bob"
charName' x = "Not in a pattern"

charName'' :: Char -> String
charName'' x = case x of 'a' -> "Albert"
                         'b' -> "Bob"

addVector ::(Num a) => (a, a) -> (a, a) -> (a, a)
addVector (a, b) (c, d) = (a + c, b + d)

addVectorsInt :: (Int, Int) -> (Int, Int) -> (Int, Int)
addVectorsInt (a, b) (c, d) = (a + c, b + d)

first :: (a, b, c) -> a
first (x, _, _) = x

second :: (a, b, c) -> b
second (_, x, _) = x

third :: (a, b, c) -> c
third (_, _, x) = x

head' :: [a] -> a
head' [] = error "Can't find head in an empty list."
head' (x:_) = x

head'' :: [a] -> a
head'' xs = case xs of [] -> error "Can't find head in an empty list."
                       (x:_) -> x

tell :: (Show a) => [a] -> String
tell [] = "The list is empty"
tell (x:[]) = "The list has one element: " ++ show x
tell (x:y:[]) = "The list has two elements: " ++ show x ++ " and " ++ show y
tell (x:y:_) = "The list is long. First two elements are: " ++ show x ++ " and " ++ show y

length' :: (Num b) => [a] -> b
length' [] = 0
length' (_:xs) = 1 + length' xs

sum' :: (Num a) => [a] -> a
sum' [] = 0
sum' (x:xs) = x + sum' xs

capital :: String -> String
capital "" = "Empty string, whoops!"
capital all@(x:xs) = "The first letter of " ++ all ++ " is " ++ [x]

bmiTell :: (RealFloat a) => a -> String
bmiTell x
    | x <= 18.5 = "Underweight"
    | x <= 25.0 = "Normal"
    | x <= 30.0 = "Fat"
    | otherwise = "Whale"

bmiTell' :: (RealFloat a) => a -> a -> String
bmiTell' weight height
    | weight / height ^ 2 <= 18.5 = "Underweight"
    | weight / height ^ 2 <= 25.0 = "Normal"
    | weight / height ^ 2 <= 30.0 = "Fat"
    | otherwise                   = "Whale"

bmiTell2 :: (RealFloat a) => a -> a -> String
bmiTell2 weight height
    | bmi <= 18.5 = "Underweight"
    | bmi <= 25.0 = "Normal"
    | bmi <= 30.0 = "Fat"
    | otherwise   = "Whale"
    where bmi = weight / height ^ 2

max' :: (Ord a) => a -> a -> a
max' a b | a < b = b | otherwise = a

myCompare :: (Ord a) => a -> a -> Ordering
myCompare a b
    | a > b     = GT
    | a == b    = EQ
    | otherwise = LT

initials :: String -> String -> String
initials firstname lastname = [f] ++ ". " ++ [l] ++ "."
    where (f:_) = firstname
          (l:_) = lastname

calcBmis :: (RealFloat a) => [(a, a)] -> [a] -- pass list of pairs
calcBmis xs = [bmi w h | (w, h) <- xs]
    where bmi weight height = weight / height ^ 2

calcBmis' :: (RealFloat a) => [(a, a)] -> [a]
calcBmis' xs = [bmi | (w, h) <- xs, let bmi = w / h ^ 2]

cylinder :: (RealFloat a) => a -> a -> a
cylinder r h =
    let sideArea = 2 * pi * r * h
        topArea = pi * r ^ 2
    in  sideArea + 2 * topArea

describeList :: [a] -> String
describeList xs = "The list is " ++ case xs of [] -> "empty."
                                               [x] -> "a singleton list."
                                               xs -> "a longer list."
