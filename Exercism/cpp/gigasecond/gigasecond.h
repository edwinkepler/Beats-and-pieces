#include "boost/date_time/gregorian/gregorian.hpp"
using namespace boost::gregorian;

namespace gigasecond
{
    date advance(date d) {
        // 1000000000 seconds = 11574 days
        return d + days(11574);
    }
}