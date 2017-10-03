-- http://learnyouahaskell.com/types-and-typeclasses
removeNonUppercase :: [Char] -> [Char]
removeNonUppercase st = [ c | c <- st, elem c ['A'..'Z'] ]

addThree :: Int -> Int -> Int -> Int
addThree x y z = x + y + z

factorial :: Integer -> Integer
factorial x = product [1..x]

factorial' :: Int -> Int
factorial' x = product [1..x]

circumference :: Float -> Float
circumference r = 2 * pi * r

circumference' :: Double -> Double
circumference' r = 2 * pi * r

squarearea :: Int -> Int
squarearea x = x * 2

squareperimeter :: Int -> Int
squareperimeter x = x * 4
