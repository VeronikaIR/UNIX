#include "Timestamp.h"
#include "TimestampWithDescription.h"


#include <iostream>

int main()
{
    Timestamp t1;
    Timestamp t2;
    TimestampWithDescription wdt2;

    std::cin >> t1;
    std::cin >> t2;
    std::cin >> wdt2;

    std::cout << (t1 + t2);
    std::cout << wdt2;

}

