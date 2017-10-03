triangles = [ (a, b, c) | c <- [1..10], b <- [1..10], a <- [1..10] ]
trianglesRight = [ (a, b, c) | c <- [1..10], b <- [1..c], a <- [1..b], a^2 + b^2 == c^2 ]
trianglesRight' = [ (a, b, c) | c <- [1..10], b <- [1..c], a <- [1..b], a^2 + b^2 == c^2, a + b + c == 24 ]
 