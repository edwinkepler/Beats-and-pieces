#include <iostream>
#include <cmath>
using namespace std;

namespace squares
{
    unsigned long long square_of_sums(int n) {
        unsigned long long squareOfSums = 0;
        for(int i = 1; i <= n; i++) {
            squareOfSums += i;
        }
        return squareOfSums *= squareOfSums;
    }

    unsigned long long sum_of_squares(int n) {
        unsigned long long sumOfSquares = 0;
        for(int i = 1; i <= n; i++) {
            sumOfSquares += i*i;
        }
        return sumOfSquares;
    }

    unsigned long long difference(int n) {
        return square_of_sums(n) - sum_of_squares(n);
    }
}