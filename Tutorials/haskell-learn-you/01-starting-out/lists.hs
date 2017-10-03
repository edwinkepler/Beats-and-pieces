-- http://learnyouahaskell.com/starting-out#an-intro-to-lists

listHead xs = head xs       -- takes a list and returns its head. The head of a list is basically its first element.
listTail xs = tail xs       -- takes a list and returns its tail. In other words, it chops off a list's head.
listLast xs = last xs       -- takes a list and returns its last element.
listInit xs = init xs       -- takes a list and returns everything except its last element.

listLength xs = length xs   -- takes a list and returns its length, obviously.
listNull xs = null xs       -- checks if a list is empty. If it is, it returns True, otherwise it returns False. 
                            -- Use this function instead of xs == [] (if you have a list called xs)
listReverse xs = reverse xs -- reverses a list.
listTake xs = take xs       -- takes number and a list. It extracts that many elements from the beginning of the list.
listDrop xs = drop xs       -- works in a similar way, only it drops the number of elements from the beginning of a list.
listMaximum xs = maximum xs -- takes a list of stuff that can be put in some kind of order and returns the biggest element.
listMinimum xs = minimum xs -- returns the smallest.
listSum xs = sum xs         -- takes a list of numbers and returns their sum.
listProduct xs = product xs -- takes a list of numbers and returns their product.
listElem y xs = elem y xs   -- takes a thing and a list of things and tells us if that thing is an element of the list. 
                            -- It's usually called as an infix function because it's easier to read that way.
