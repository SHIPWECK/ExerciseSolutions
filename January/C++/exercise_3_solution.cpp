#include <iostream>
#include <ctime>
#include <chrono>

/*
RetirementCalculator

Your computer knows what the current year is, which means
you can incorporate that into your programs. You just have
to figure out how your programming language can provide
you with that information.

Create a program that determines how many years you have
left until retirement and the year you can retire. It should
prompt for your current age and the age you want to retire
and display the output as shown in the example that follows.

Example Output:
What is your current age? 25
At what age would you like to retire? 65
You have 40 years left until you can retire.
It's 2015, so you can retire in 2055
*/

int main()
{
    int age, retirementAge;
    std::cout << "What is your current age? ";
    std::cin >> age;
    std::cout << "At what age would you like to retire? ";
    std::cin >> retirementAge;

    int yearsUntilRetirement = retirementAge - age;
    
    std::cout << "You have " << yearsUntilRetirement << " years until you can retire.\n";
    auto now = std::chrono::system_clock::now();

    // this only works in C++20 and up
    // auto today = std::chrono::time_point_cast<std::chrono::days>(now);
    // auto currentYear = (int)std::chrono::year_month_day(today).year(); 

    // this works in all versions of C++
    // it is also done similarly in C
    std::time_t t = std::time(nullptr); // get the current time (just a number)
    std::tm* time = std::localtime(&t); // convert the current time to readable local time (a struct with many parts storing the exact time)
    // access the year from previously mentioned struct (we add 1900 because .tm_year stores the years since 1900)
    int currentYear = time->tm_year + 1900; 
    
    std::cout << "It's " << currentYear << ", so you can retire in " << currentYear + yearsUntilRetirement;
}