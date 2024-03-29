#include <iostream>

/* 
RectangularArea
When working in an international environment, you’ll have to present information in both
metric and Imperial units. And you’ll need to know when to do the conversion to ensure
the most accurate results. Create a program that calculates the area of a room. Prompt
the user for the length and width of the room in feet. Then display the area in both square feet
and square meters.
Example Output:
What is the length of the room in feet? 15
What is the width of the room in feet? 20
You entered dimensions of 15 feet by 20 feet.
The area is
300 square feet
27.871 square meters
The formula for this conversion is:
m^2 = f^2 × 0.09290304 
*/

int main()
{
    int length, width;
    std::cout << "What is the length of the room in feet? ";
    std::cin >> length;

    std::cout << "What is the width of the room in feet? ";
    std::cin >> width;

    std::cout << "You entered dimensions of " << length << " feet by " << width << " feet";

    int area = length * width;
    // here, we store the result of multiplying by the constant in a double
    // this prevents the program from rounding the result to a whole number
    double areaInMeters = area * 0.09290304;
    std::cout << "The area is\n";
    std::cout << area << " square feet\n";
    std::cout << areaInMeters << " square meters\n";
}