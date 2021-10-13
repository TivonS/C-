/*
Tivon Straub
10/13/2021
The purpose of this lab is to practice using nest and chain statements the 
first part akss for you your grade and tells you the corresponding letter the 
second question

I hereby certify that this program represents my work and that the design
and logic was completed without outside assistance.

Signature:
*/
#include <iostream>


int main()
{
	double grade;

	std::cout << "What is your in C++? ";
	std::cin >> grade;

	system("cls");

	if (grade >= 60)
	{
		std::cout << "You have a D-";
	}
	else if (grade >= 63)
		{
		std::cout << "You have a D";
		}
	else if (grade >= 66.5)
		{
		std::cout << "You have a D+";
		}
	else if (grade >= 69.5)
		{
		std::cout << "You have a C-";
		}
	else if (grade >= 73.5)
		{
		std::cout << "You have a C";
		}
	else if (grade >= 77.5)
		{
		std::cout << "You have a C+";
		}
	else if (grade >= 79.5)
		{
		std::cout << "You have a B-";
		}
	else if (grade >= 83.5)
		{
		std::cout << "You have a B";
		}
	else if (grade >= 87.5)
		{
		std::cout << "You have a B+";
		}
	else if (grade >= 89.5)
		{
		std::cout << "Congrats you have a A-";
		}
	else if (grade >= 93.5)
		{
		std::cout << "Nice job! You have a A!";
		}
		
	
	else
	{
		std::cout << "Try harder your failing right now";
	}

}