#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
public:
	Management()
	{
		mainMenu();
	}
};

class Details
{
public:
	static string name, gender;
	int phoneNo;
	int age;
	string add;
	static int cId;
	char arr[100];

	void information()
	{
		cout << "\nEnter the customer ID: ";
		cin >> cId;
		cout << "\nEnter the name: ";
		cin >> name;
		cout << "\nEnter the age: ";
		cin >> age;
		cout << "\n Address: ";
		cin >> add;
		cout << "\nGender: ";
		cin >> gender;
		cout << "Your details are saved with us\n" << endl;


	}
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
public:
	static int choice;
	int choice1;
	int back;
	static float charges;

	void flights()
	{
		string flightN[] = { "Dubai","Canada","UK","USA","Australia" };

		for (int a = 0;a < 5;a++)
		{
			cout << (a + 1) << ".flight to " << flightN[a] << endl;
		}

		cout << "\nWelcome to the Airlines!" << endl;
		cout << "Press their number of the country of which you want to book the flight: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "_______________________Welcome to Dubai Emirates_______________________\n" << endl;
			cout << "Your comfort is our priority. Enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. DUB - 498" << endl;
			cout << "\t08-01-2022 8:00AM 10hrs Rs. 14000" << endl;
			cout << "2. DUB - 658" << endl;
			cout << "\t09-01-2022 4:00AM 12hrs Rs. 10000" << endl;
			cout << "3. DUB - 508" << endl;
			cout << "\t11-01-2022 11:00AM 11hrs Rs. 9000" << endl;
			cout << "\nSelect the flight you want to book: ";
			cin >> choice1;

			if (choice1 == 1)
			{
				charges = 14000;
				cout << "\nYou have successfully booked the flight DUB - 498" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}
			else if (choice == 2)
			{
				charges = 10000;
				cout << "\nYou have successfully booked the flight DUB - 658" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}
			else if (choice == 3)
			{
				charges = 9000;
				cout << "\nYou have successfully booked the flight DUB - 508" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}
			else
			{
				cout << "Invalid input, shifting to the previous menu" << endl;
				flights();
			}

			cout << "Press any key to go back to the main menu: " << endl;
			cin >> back;

			if (back == 1)
			{
				mainMenu();
			}
			else mainMenu();
		}
		break;
		case 2:
		{
			cout << "_______________________Welcome to Canada Emirates_______________________\n" << endl;
			cout << "Your comfort is our priority. Enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. CA - 198" << endl;
			cout << "\t09-01-2022 2:00PM 20hrs Rs. 34000" << endl;
			cout << "2. CA - 158" << endl;
			cout << "\t11-01-2022 6:00AM 23hrs Rs. 29000" << endl;
			cout << "3. CA - 208" << endl;
			cout << "\t14-01-2022 12:00AM 21hrs Rs. 40000" << endl;
			cout << "\nSelect the flight you want to book: ";
			cin >> choice1;

			if (choice1 == 1)
			{
				charges = 14000;
				cout << "\nYou have successfully booked the flight CA - 198" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}
			else if (choice == 2)
			{
				charges = 10000;
				cout << "\nYou have successfully booked the flight CA - 158" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}
			else if (choice == 3)
			{
				charges = 9000;
				cout << "\nYou have successfully booked the flight CA - 208" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}
			else
			{
				cout << "Invalid input, shifting to the previous menu" << endl;
				flights();
			}

			cout << "Press any key to go back to the main menu: " << endl;
			cin >> back;

			if (back == 1)
			{
				mainMenu();
			}
			else mainMenu();
		}
		break;
		case 3:
		{
			cout << "_______________________Welcome to UK Airways_______________________\n" << endl;
			cout << "Your comfort is our priority. Enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. UK - 798" << endl;
			cout << "\t12-01-2022 10:00AM 14hrs Rs. 44000" << endl;
			
			cout << "\nSelect the flight you want to book: ";
			cin >> choice1;

			if (choice1 == 1)
			{
				charges = 44000;
				cout << "\nYou have successfully booked the flight UK - 798" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}
			
			else
			{
				cout << "Invalid input, shifting to the previous menu" << endl;
				flights();
			}

			cout << "Press any key to go back to the main menu: " << endl;
			cin >> back;

			if (back == 1)
			{
				mainMenu();
			}
			else mainMenu();
		}
		break;
		case 4:
		{
			cout << "_______________________Welcome to US Airways_______________________\n" << endl;
			cout << "Your comfort is our priority. Enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. US - 567" << endl;
			cout << "\t10-01-2022 9:00AM 22hrs Rs. 37000" << endl;
			cout << "2. US - 658" << endl;
			cout << "\t09-01-2022 6:00AM 22hrs Rs. 39000" << endl;
			cout << "3. US - 508" << endl;
			cout << "\t12-01-2022 1:00AM 21hrs Rs. 42000" << endl;

			cout << "\nSelect the flight you want to book: ";
			cin >> choice1;

			if (choice1 == 1)
			{
				charges = 37000;
				cout << "\nYou have successfully booked the flight US - 567" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}

			else if (choice1 == 2)
			{
				charges = 39000;
				cout << "\nYou have successfully booked the flight US - 658" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}

			else if (choice1 == 3)
			{
				charges = 42000;
				cout << "\nYou have successfully booked the flight US - 508" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}

			else
			{
				cout << "Invalid input, shifting to the previous menu" << endl;
				flights();
			}

			cout << "Press any key to go back to the main menu: " << endl;
			cin >> back;

			if (back == 1)
			{
				mainMenu();
			}
			else mainMenu();
		}
		break;
		case 5:
		{
			cout << "_______________________Welcome to Ausralian Airlines_______________________\n" << endl;
			cout << "Your comfort is our priority. Enjoy the journey!" << endl;
			cout << "Following are the flights \n" << endl;
			cout << "1. AS - 698" << endl;
			cout << "\t18-01-2022 9:00AM 20hrs Rs. 44000" << endl;
			cout << "2. AS - 158" << endl;
			cout << "\t19-01-2022 4:00AM 22hrs Rs. 34000" << endl;
			cout << "3. AS - 708" << endl;
			cout << "\t17-01-2022 10:00AM 21hrs Rs. 42000" << endl;
			cout << "\nSelect the flight you want to book: ";
			cin >> choice1;

			if (choice1 == 1)
			{
				charges = 44000;
				cout << "\nYou have successfully booked the flight AS - 698" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}
			else if (choice == 2)
			{
				charges = 34000;
				cout << "\nYou have successfully booked the flight AS - 158" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}
			else if (choice == 3)
			{
				charges = 42000;
				cout << "\nYou have successfully booked the flight AS - 708" << endl;
				cout << "You can go back to menu and take the ticket" << endl;
			}
			else
			{
				cout << "Invalid input, shifting to the previous menu" << endl;
				flights();
			}

			cout << "Press any key to go back to the main menu: " << endl;
			cin >> back;

			if (back == 1)
			{
				mainMenu();
			}
			else mainMenu();
		}
		break;

		default:
			cout << "Invalid input, Shifting you to the main menu!" << endl;
			mainMenu();
			break;
		}
	}

};

float registration::charges;
int registration::choice;

class ticket:public registration,Details
{
public:
	void Bill()
	{
		string destination = "";
		ofstream outf("recordss.txt");
		{
			outf << "____________XYZ Airlines_______________" << endl;
			outf << "_______________Ticket__________________" << endl;
			outf << "_______________________________________" << endl;

			outf << "Customer ID: " << Details::cId << endl;
			outf << "Customer Name: " << Details::name << endl;
			outf << "Customer Gender: " << Details::gender << endl;
			outf << "\tDescription" << endl << endl;

			if (registration::choice == 1) destination = "Dubai";
			else if(registration::choice == 2) destination = "Canada";
			else if (registration::choice == 3) destination = "UK";
			else if (registration::choice == 4) destination = "US";
			else if (registration::choice == 5) destination = "Australia";
			outf << "Destination\t\t" << destination << endl;
			outf << "Flight cost :\t\t" << registration::charges << endl;
		}
		outf.close();
	}
	void disBill()
	{
		ifstream ifs("recordss.txt");
		{
			if (!ifs) cout << "File error!" << endl;
			while (!ifs.eof())
			{
				ifs.getline(arr, 100);
				cout << arr << endl;
			}

		}
		ifs.close();
	}
};

void mainMenu()
{
	int lchoice;
	int schoice;
	int back;

	cout << "\t               XYZ Airlines   \n" << endl;
	cout << "\t___________Main Menu____________" << endl;

	cout << "\t________________________________" << endl;
	cout << "\t|\t\t\t\t\t|" << endl;

	cout << "\t|\t Press 1 to add the Customer Details      \t|" << endl;
	cout << "\t|\t Press 2 for Flight Registration          \t|" << endl;
	cout << "\t|\t Press 3 for Ticket and Charge            \t|" << endl;
	cout << "\t|\t Press 4 to Exit                          \t|" << endl;
	cout << "\t________________________________________________________" << endl;

	cout << "Enter the choice : ";
	cin >> lchoice;

	Details d;
	registration r;
	ticket t;

	switch (lchoice)
	{
	case 1:
	{
		cout << "_____________Customers______________\n" << endl;
		d.information();
		cout << "Press 1 to go back to Main menu: ";
		cin >> back;

		if (back == 1) mainMenu();
		else mainMenu();
		break;
	}
	case 2:
	{
		cout << "___________Book a flight using this system______________\n" << endl;
		r.flights();
		break;
	}
	case 3:
	{
		cout << "______GET YOUR TICKET______\n" << endl;
		t.Bill();

		cout << "Your ticket is printed, you can collect it \n" << endl;
		cout << "Press 1 to display your ticket ";

		cin >> back;

		if (back == 1)
		{
			t.disBill();
			cout << "Press any key to go back to main menu: ";
			cin >> back;
			if (back == 1) mainMenu();
			else  mainMenu();
		}
		else mainMenu();
		break;
	}

	case 4:
	{
		cout << "\n\n\t__________Thank-you___________" << endl;
		break;
	}
	default:
		cout << "Invalid input, Please try again!\n" << endl;
		mainMenu();
		break;
	}

}











int main()
{
	Management Mobj;
	return 0;

}