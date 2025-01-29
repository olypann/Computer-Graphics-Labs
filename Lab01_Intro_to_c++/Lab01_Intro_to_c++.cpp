#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
#include "Student.hpp"
#include "Student.cpp"


float pi = M_PI;

unsigned int intArray[] = {
    1, 2, 3, 4, 5
};

void radians(float& angle)
{
    angle *= pi / 180;
}


int main() {
    std::cout << intArray[2] << std::endl;
    std::cout << "\nsize of intArray = " << sizeof(intArray) << std::endl;


    ////------------------

    float angleInDegrees = 90.0f;
    float angle = angleInDegrees;
    radians(angle);

    std::cout << "\n" << angleInDegrees << " degrees is equal to " << angle << " radians" << std::endl;

    //Student student1("Martin", "Blackwood", 53, "Computer Science", 3);

    return 0;
}