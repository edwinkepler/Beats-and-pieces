-- http://learnyouahaskell.com/recursion
maximum' :: (Ord a) => [a] -> a
maximum' []             = error "Empty list"
maximum' [x]            = x
maximum' (x:xs)
    | x > maximum' xs   = x
    | otherwise         = maximum' xs

maximum'' :: (Ord a) => [a] -> a
maximum'' []        = error "Empty list"
maximum'' [x]       = x
maximum'' (x:xs)    = max x (maximum'' xs)

replicate' :: (Num i, Ord i) => i -> a -> [a]
replicate' n x
    | n <= 0    = []
    | otherwise = x:replicate' (n - 1) x

{-
Note to above: Num is not a subclass of Ord. That means that what constitutes
for a number doesn't really have to adhere to an ordering. So that's why we have
to specify both the Num and Ord class constraints when doing addition or
subtraction and also comparison.
-}

take' :: (Num i, Ord i) => i -> [a] -> [a]
take' n _
    | n <= 0    = []
take' _ []      = []
take' n (x:xs)  = x : take' (n - 1) xs

reverse' :: [a] -> [a]
reverse' []     = []
reverse' (x:xs) = reverse' xs ++ [x]

repeat' :: a -> [a]
repeat' x = x:repeat x

zip' :: [a] -> [b] -> [(a, b)]
zip' _ []           = []
zip' [] _           = []
zip' (x:xs) (y:ys)  = (x, y):zip' xs ys

elem' :: (Eq a) => a -> [a] -> Bool
elem' a []      = False
elem' a (x:xs)
    | a == x    = True
    | otherwise = elem' a xs

quicksort :: (Ord a) => [a] -> [a]
quicksort [] = []
quicksort (x:xs) =
    let smallerSorted   = quicksort [a | a <- xs, a <= x]
        biggerSorted    = quicksort [a | a <- xs, a > x]
    in  smallerSorted ++ [x] ++ biggerSorted
