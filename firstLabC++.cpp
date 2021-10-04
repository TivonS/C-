/*
Tivon Straub
10/3/2021
The purpose of this lab is to practice converting units from one system
to another.

I hereby certify that this program represents my work and that the design
and logic was completed without outside assistance.

Signature:
*/
#include <iostream>
#include <iomanip>


int main()
{
    //creating different variables for the conversions
    double pWeight;
    int height;
    double miles;
    double gallon;
    double year;
    int spamMail = 55;
    double pound;

    //asking the questions and than recieving a input value
    std::cout << "How much does your package weigh in pounds? ";
    std::cin >> pWeight;

    std::cout << "\nhow tall are you in inches? ";
    std::cin >> height;

    std::cout << "\nhow many miles did you travel on your last trip? ";
    std::cin >> miles;
    std::cout << "\nhow many gallons did you use to travel on your last trip? ";
    std::cin >> gallon;

    std::cout << "\nhow old are you in years? ";
    std::cin >> year;

    std::cout << "\nhow many troy pounds do you have? ";
    std::cin >> pound;

    system("cls");

    // converting the inputted value to the different type of units
    std::cout << "package weight: " << pWeight * 16 << " ounces \n" << std::endl;

    std::cout << "you are " << height / 12 << " feet and " << (height % 12)
        << " inches \n" << std::endl;

    std::cout << "you averaged " << miles / gallon << " mpg\n" << std::endl;

    std::cout << "your " << year << " year old or "
        << year * 365 << " days old\n" << std::endl;

    std::cout << "spamMail = " << spamMail << ", double spamMail = " << spamMail * 2;
    //since I we havent talked about finding square roots I found it 
    std::cout << ", square root of spamMail= " << sqrt(spamMail) << std::endl;

    //std::fixed is making sure the final number is not rounded
    std::cout << std::fixed;
    std::cout << "you have " << pound * 12 * 31.1035;
    std::cout << " ounces \n" << std::endl;

    return 0;

}
