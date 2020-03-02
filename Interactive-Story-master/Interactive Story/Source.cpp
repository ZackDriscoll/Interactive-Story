//Interactive Story: A Star Wars the Clone Wars Story
//Author: Zack Driscoll

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Functions
void Scenario();
string ChoiceOneA();
string ChoiceTwoA();
string ChoiceOneB();
string ChoiceTwoB();
string ChoiceOneC();
string ChoiceTwoC();
int Role();

int main()
{
	//Title
	cout << "\n\t\t *** Star Wars: The Clone Wars *** \n\n";

	//Run the scenario for the user to begin playing
	Scenario();

	//Run the choice method to let the user do something
	ChoiceOne();

	return 0;
}

void Scenario()
{
	//Introduction
	cout << "\n\nYou are a clone in the Grand Army of the Republic.\n";
	cout << "While on a mission to aid troops in the Felucia system, you are attacked by a Separatist cruiser!\n";

	//Run the Role function
	Role();
}

//Function for the user's first choice
string ChoiceOneA()
{
	//Variable to hold the user's choice
	string userChoice;

	//First choice scenario
	cout << "\nAs a fighter pilot, you need to get to your ship and begin defending your cruiser. You reach hanger A and see that there is an ARC-170 starfighter and a Y-Wing left.";

	//Ask for user input
	cout << "Which do you choose? Enter 'A' for the ARC-170 or 'Y' for the Y-wing and press enter.";

	//Allows user to type in an answer
	getline(cin, userChoice);

	ChoiceTwoA();

	return userChoice;
}

//Function for the user's second choice
string ChoiceTwoA()
{
	//Variable to hold the user's choice
	string userChoice;

	if (ChoiceOneA.userChoice == A)
	{
		cout << "\nYou hop in the ARC-170 starfighter and launch yourself into space.";
	}

	//Ask for user input
	cout << "What do you do? ";

	//Allows user to type in an answer
	getline(cin, userChoice);

	return userChoice;
}

//Function for the user's third choice
string ChoiceOneB()
{
	//Variable to hold the user's choice
	string userChoice;

	//Ask for user input
	cout << "What do you do? ";

	//Allows user to type in an answer
	getline(cin, userChoice);

	return userChoice;
}

string ChoiceTwoB()
{
	//Variable to hold the user's choice
	string userChoice;

	//Ask for user input
	cout << "What do you do? ";

	//Allows user to type in an answer
	getline(cin, userChoice);

	return userChoice;
}

string ChoiceOneC()
{
	//Variable to hold the user's choice
	string userChoice;

	//Ask for user input
	cout << "What do you do? ";

	//Allows user to type in an answer
	getline(cin, userChoice);

	return userChoice;
}

string ChoiceTwoC()
{
	//Variable to hold the user's choice
	string userChoice;

	//Ask for user input
	cout << "What do you do? ";

	//Allows user to type in an answer
	getline(cin, userChoice);

	return userChoice;
}

//Determine the user's character role (job)
int Role()
{
	//Variable to help generate a random role for the user
	int role = rand() % 3 + 1;

	if (role == 1)
	{
		cout << "\nYou are a fighter pilot.\n\n";
		ChoiceOneA();
	}
	else if (role == 2)
	{
		cout << "\nYou are a ship mechanic.\n\n";
		ChoiceOneB();
	}
	else if (role == 3)
	{
		cout << "\nYou are a cannon operator.\n\n";
		ChoiceOneC();
	}

	return role;
}