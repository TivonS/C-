/*
Tivon Straub
10/13/2021
The purpose of this lab is practice using if statements in this case the two 
scenarioes is to tell the user if the triangle is a right angle or not and 
if the a students has 122 credits to grduate

I hereby certify that this program represents my work and that the design
and logic was completed without outside assistance.

Signature:
*/
#include <iostream>


int main()
{
	//setting variables for the two problems
	int degree;
	int credits;

	//asking user questions and receiving their values
	std::cout << "How big is your angle? ";
	std::cin >> degree;

	std::cout << "\nHow many credits do you have? ";
	std::cin >> credits;

	//clearing screen
	system("cls");

	//if degree = 90 than its a right angle, otherwise not a right angle
	if (degree == 90)
	{
		std::cout << "Right angle";
	}
	else
	{
		std::cout << "Not a right angle";
	}
	//if credits >= 122 than you graduate if not you dont
	if (credits >= 122)
	{
		std::cout << "\nCongrats you can graudate!";
	}
	else
	{
		std::cout << "\nSorry need more credits:(";
	}
}

