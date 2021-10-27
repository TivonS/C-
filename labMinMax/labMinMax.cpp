/*
Tivon Straub
The purpose of this lab is for the user to be able to input 8 integers and for
the computer to be able to identify the biggest number and smallest number.
I hereby certify that this program represents my work and that the design
and logic was completed without outside assistance.
Signature:
*/
#include <iostream>


int main()
{
    //creating a variable to represent each number
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int great;  // both great and least are used lower
    int less;

    /*
    asking user for the 8 numbers and storing the data in variables.
    */
    std::cout <<
        "I can tell you the greatest/smallest number of a set of 8 numbers!";
    std::cout << "\nNow give me your first number: ";
    std::cin >> a;
    std::cout << "\nYour second number: ";
    std::cin >> b;
    std::cout << "\nYour third number: ";
    std::cin >> c;
    std::cout << "\nYour fourth number: ";
    std::cin >> d;
    std::cout << "\nYour fifth number: ";
    std::cin >> e;
    std::cout << "\nYour sixth number: ";
    std::cin >> f;
    std::cout << "\nYour seventh number: ";
    std::cin >> g;
    std::cout << "\nYour eighth number: ";
    std::cin >> h;

    system("cls");

    /*
    disciminating data to find the largest number I did this by setting a
    variable great and using if statements to compare the different numbers.
    */
    great = a;
    if (b > great)
    {
        great = b;      
    }
   if (c > great)
    {
        great = c;    
    }
    if (d > great)
    {
        great = d;     
    }
     if (e > great)
    {
        great = e;       
    }
    if (f > great)
    {
        great = f;     
    }
    if (g > great)
    {
        great = g;       
    }
     if (h > great)
    {
        great = h;       
    }
     std::cout << great << " is the greatest number!" << std::endl;

    /*
    same procces that was used for greater is now used for less than
    */
     less = a;
     if (b < less)
     {
         less = b;
     }
     if (c < less)
     {
         less = c;
     }
     if (d < less)
     {
         less = d;
     }
     if (e < less)
     {
         less = e;
     }
     if (f < less)
     {
         less = f;
     }
     if (g < less)
     {
         less = g;
     }
     if (h < less)
     {
         less = h;
     }
     std::cout << less << " is the smallest number!";
}
