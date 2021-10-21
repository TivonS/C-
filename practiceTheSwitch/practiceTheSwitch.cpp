/*
Tivon Straub
10/21/2021
The purpose of this lab is to practice using switches, I'm practicing by 
allowing user to input their letter grade(upper or lower) and the computer 
spits back out their grade.

I hereby certify that this program represents my work and that the design
and logic was completed without outside assistance.

Signature:
*/
#include <iostream>

int main()
{
   //creating variable for user to input their grade
	char grade;

	//asking user their grade and storing it
	std::cout << "What is your letter grade in C++? ";
	std::cin >> grade;

	system ("cls");

	//taking their grade and telling them how well they are doing
	switch (grade)
	{
	case'A-':
	case'a-':
		std::cout << "Congrats! You have over a 89.5%-100%!";
	case'B':
	case'b':
		std::cout << "Nice job! You have a grade between 79.5%-89.5%";
	case'C':
	case'c':
		std::cout << "Hey C's get degree's you have a grade between 69.5%-79.5%";
	case'D':
	case'd':
		std::cout << "You are so close! You have a grade between 59.5%-69.5%";
	case'F':
	case'f':
		std::cout << 
			"Is this the best you can do? You are failing your grade is < 59.5%";
		break;
	default:
	{
		std::cout << "Come on give me a actual grade...";
	}
	}
	
}
