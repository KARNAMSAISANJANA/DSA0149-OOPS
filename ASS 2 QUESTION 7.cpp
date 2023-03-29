#include <iostream>
#include <string>

int main() {

    const char dash = '-' ; // expected separator
    const int current_year = 2019 ;

    int month ;
    int day ;
    int year ;
    char separator ; // to capture the separator between input flds

    std::cout << "Please enter your birth date (mm-dd-yyyy): " ;

    if( std::cin >> month && month > 0 && month < 13 && // valid month [1,12]
        std::cin >> separator && separator == dash && // valid separator
        std::cin >> day && day > 0 && day < 32 && // valid day [1,31]
        std::cin >> separator && separator == dash && // valid separator
        std::cin >> year && year > 1800 && year <= current_year ) // valid year [1800,current_year]
    {
        // valid input: print name of month (Jan == 1)
        const std::string month_names[] = // look up table containing names
        {
            "", // 0 is not used
            "January", // 1
            "February", // 2
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December" // 12
        };

        std::cout << "your birth day is in the month of " << month_names[month] << '\n' ;
    }

    else std::cout << "Invalid Date!\n" ;
}
