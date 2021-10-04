/*
Tivon Straub
10/3/2021
The purposeof this lab is to be able to have the user tell you what type of
change is in their pocket and for you to tell them how much money that is.

I hereby certify that this program represents my work and that the design
and logic was completed without outside assistance.

Signature:
*/
#include <iostream>


int main()
{
	//creating variable for different coin types.
	double penny;
	double nickel;
	double dime;
	double quarter;
	double halfDollar;
	double dollar;


	//asking what coins are in pocket.
	std::cout << "How many penny's are in your pocket? ";
	std::cin >> penny;
	std::cout << "\nHow many nickel's are in your pocket? ";
	std::cin >> nickel;
	std::cout << "\nHow many dime's are in your pocket? ";
	std::cin >> dime;
	std::cout << "\nHow many quarter's are in your pocket? ";
	std::cin >> quarter;
	std::cout << "\nHow many half dollar's are in your pocket? ";
	std::cin >> halfDollar;
	std::cout << "\nHow many dollar coin's are in your pocket? ";
	std::cin >> dollar;

	system("cls");

	/*
	adding up all the coin values and telling the user how much
	is in their pocket.
	*/
	std::cout << "You have $" << (penny * 1 + nickel * 5 + dime * 10 + quarter
		* 25 + halfDollar * 50 + dollar * 100) / 100 << " of change in your pocket"
		<< std::endl;
}