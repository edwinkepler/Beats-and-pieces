#include "even_fibonacci_numbers.h"
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(to_term_10)
{
    BOOST_REQUIRE_EQUAL(10, fib::sum_up_even(10));
}

BOOST_AUTO_TEST_CASE(to_term_100)
{
    BOOST_REQUIRE_EQUAL(44, fib::sum_up_even(100));
}