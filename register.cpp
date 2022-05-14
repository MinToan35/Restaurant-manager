#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void login();
void registration();
void forgot();

int main()
{
	int choice;
	cout << "\t\t\t________________________________________________________________\n\n\n";
	cout << "\t\t\t                     Welcome to the login page                  \n\n\n";
	cout << "\t\t\t_________________               MENU              ______________\n\n";
	cout << "\t| Press 1 to LOGIN                        |\n";
	cout << "\t| Press 2 to REGISTER                     |\n";
	cout << "\t| Press 3 if you forgot your PASSWORD     |\n";
	cout << "\t| EXIT                                    |";
	cout << "\n\n\t\t\t Please enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		login();
		break;
	case 2:
		registration();
		break;
	case 3:
		forgot();
		break;
	case 4:
		exit(0);
	default:
		system("cls");
		cout << "\t\t\t Please select from the options given above\n\n";
		main();
		break;
	}



	return 0;
}

void login()
{
	//int count = 0;
	string userId, password, id, pass;
	system("cls");
	cout << "\t\t Please enter the username and password: \n";
	cout << "\t\t USERNAME: ";
	cin >> userId;
	cout << "\t\t PASSWORD: ";
	cin >> password;

	ifstream input("records.txt");

	while (input >> id >> pass)
	{
		if (id == userId && pass == password)
		{
			system("cls");
			cout << id << endl;
			cout << " Your LOGIN is successful\n Thanks for logging in!\n";
			main();

		}
		else
		{
			cout << "\n\n LOGIN ERROR\n Please check your username and password\n";
			main();
		}
	}
}

void registration()
{
	string ruserName, rpassword;
	system("cls");
	cout << "\t\t\t Enter the username: ";
	cin >> ruserName;
	cout << "\t\t\t Enter the password: ";
	cin >> rpassword;

	ofstream f1("records.txt", ios::app);
	f1 << ruserName << " " << rpassword << endl;
	system("cls");
	cout << "\n\t\t\t Registration is successful!\n";
	main();
}

void forgot()
{
	
	int c;
	int count = 0;
	string suserid,sId,spass;
	system("cls");
	m:
	cout << "\t\t\t You forgot the password?\n";
	cout << " No worries\n";
	cout << "Press 1 to search your id by username\n";
	cout << "Press 2 to go back to the main menu\n";
	cout << "\t\t\t Enter your choice: ";
	cin >> c;

	switch (c)
	{
	case 1:
	{
		cout << "\n\n\t\t\tEnter the username which you remembered: ";
		cin >> suserid;

		ifstream f2("records.txt");
		while (f2 >> sId >> spass)
		{
			if (sId == suserid) count = 1;
		}
		f2.close();
		if (count==1)
		{
			cout << "\n\n Your account is found";
			cout << "\n\n\n Your password is: " << spass << endl;
			main();
		}
		else
		{
			cout << "\n\t Sorry! Your account is not found!\n";
			main();
		}
		
	}
	break;
	case 2:
		main();
		break;
	default:
		cout << "\n\n\t\t\t Please select from the options given above\n\n";
		goto m;
		break;
	}

}