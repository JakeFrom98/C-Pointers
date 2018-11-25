// Libraries
#include <iostream>
#include <string>

using namespace std; // Form of scope 

void rounds() // Rounds function
{
	float rounds; // To store decimal points
	rounds = 100.67; // 100.67 decimal
	cout << "There is a total of " << rounds << " rounds left after yesterdays target practicing.\n";
	system("pause"); // Pauses console
	system("cls"); // Clears console
}

void aid() // First aid function
{
	float aid; // To store decimal points
	aid = 80.42; // 80.42 decimal

	int* building = 0;   // Declare and initialized
	int test = 100; // Test variable  
	building = &test;   // Assigned pointer test address of a variable score

	cout << "Next is to check how much first aid there is, the first aid is located in a different building.\n";
	system("pause"); // Pauses console
	system("cls"); // Clears console

	cout << "The name of the building where the first aid is stored at is " << building << ".\n";
	system("pause"); // Pauses console
	system("cls"); // Clears console
	cout << "You go into building " << building << " and you count how much first aid supplies there is.\n";
	system("pause"); // Pauses console
	system("cls"); // Clears console

	cout << "There is a total of " << aid << " of first aid kits left.\n";
	system("pause"); // Pauses console
	system("cls"); // Clears console
}

int main() // Main function
{
	char text[104] = "You're a soldier and your commanding officer has requested that you take inventory of all the supplies."; // Character variable set to 104

	int* building = 0;   // Declare and initialized
	int test = 1000; // Test variable  
	building = &test;   // Assigned pointer test address of a variable score

	cout << text << " \nThe name of the building where the supplies are stored is " << building <<".\n";
	system("pause"); // Pauses console
	system("cls"); // Clears console
	cout << "You go into building " << building << " and you check how many rounds of ammo there is.\n";
	system("pause"); // Pauses console
	system("cls"); // Clears console
	rounds(); // Calls rounds function
	aid(); // Calls first aid function
	
	cout << "This finishes up your check up on the inventory.\n" << "You report your findings to the Sargent.\n";
	system("pause"); // Pauses console
}