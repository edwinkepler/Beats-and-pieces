<?php

function squareOfSums(int $_n) : int
{
    $sum = 0;
    for ($i = 1; $i <= $_n; $i++) {
        $sum += $i;
    }

    return $sum * $sum;
}

function sumOfSquares(int $_n) : int
{
    $sum = 0;
    for ($i = 1; $i <= $_n; $i++) {
        $sum += $i * $i;
    }

    return $sum;
}

function difference(int $_n) : int
{
    return squareOfSums($_n) - sumOfSquares($_n);
}
