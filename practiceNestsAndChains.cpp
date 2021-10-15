/*
Tivon Straub
10/13/2021
The purpose of this lab is to practice using nest and chain statements the
first part akss for you your grade and tells you the corresponding letter the
second question second lab is to when theuser inputs two numbers to tell the 
user if they are greater than 10.

I hereby certify that this program represents my work and that the design
and logic was completed without outside assistance.

Signature:
*/
#include <iostream>


int main()
{
	//created variables for projects
	double grade;
	int a;
	int b;

	//question user and collect a response
	std::cout << "What is your grade in C++? ";
	std::cin >> grade;

	std::cout << "What is the value of your first number? ";
	std::cin >> a;

	std::cout << "What is the value of your second number? ";
	std::cin >> b;

	system("cls");

	// using the inputted data to find type of number practicing nested data.
	if (b > 10)
	{
		if (a > 10)
		{
			std::cout << "Both numbers are greater than 10! " << std::endl;
		}

	}
	else if (a > 10)
	{
	std:: cout << "Only the first number is great than 10 " << std::endl;
	}
	if (b < 10)
	{
		if (a < 10)
		{
			std::cout << "Both numbers are less than 10... " << std::endl;
		}

	}

	/* all of the if statements needed to spit out your grade, practicing
	 sequential coding
	 */
	if (grade < 59.5)
	{
		std::cout << "Try harder your failing right now";
	}
	else if (grade >= 93.5)
	{	
		std::cout << "Nice Job! You have a A";
	}
	else if (grade >= 89.5)
	{
		std::cout << "Nice job! You have a A-";
	}
	else if (grade >= 87.5)
	{
		std::cout << "You have a B+";
	}
	else if (grade >= 83.5)
	{
		std::cout << "You have a B";
	}
	else if (grade >= 79.5)
	{
		std::cout << "You have a B-";
	}
	else if (grade >= 77.5)
	{
		std::cout << "You have a C+";
	}
	else if (grade >= 73.5)
	{
		std::cout << "You have a C";
	}
	else if (grade >= 69.5)
	{
		std::cout << "You have a C-";
	}
	else if (grade >= 67.5)
	{
		std::cout << "You have a D+";
	}
	else if (grade >= 63.5)
	{
		std::cout << "You have a D";
	}
	else if (grade >= 59.5)
	{
		std::cout << "You have a D-";
	}
}
