-- http://learnyouahaskell.com/starting-out#tuples
tupleFirst x = fst x    -- takes a pair and returns its first component.
tupleSecond x = snd x   -- takes a pair and returns its second component. Surprise!
tupleZip x y = zip x y  -- takes two lists and then zips them together into one list by joining the matching elements into pairs.
