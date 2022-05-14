#include<iostream>
#include<string>
using namespace std;

int main()
{
	int choice;
	int Qrooms, Qpasta, Qburger, Qnoodles, Qshake, Qchicken;
	int Srooms, Spasta, Sburger, Snoodles, Sshake, Schicken;
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
	int Proom = 500, Ppasta = 100, Pburger = 50, Pnoodles = 20, Pshake = 10, Pchicken = 80;

	cout << "\n\tQuantity of items we have";
	cout << "\n\n Rooms avaliable: ";
	cin >> Qrooms;
	cout << "\n Quantity of pasta: ";
	cin >> Qpasta;
	cout << "\n Quantity of burger: ";
	cin >> Qburger;
	cout << "\n Quantity of noddle: ";
	cin >> Qnoodles;
	cout << "\n Quantity of shake: ";
	cin >> Qshake;
	cout << "\n Quantity of chicken-roll: ";
	cin >> Qchicken;

m:
	cout << "\n\n\t\t\t Please seclect from the menu options";
	cout << "\n1) Rooms";
	cout << "\n2) Pasta";
	cout << "\n3) Burger";
	cout << "\n4) Noodles";
	cout << "\n5) Shake";
	cout << "\n6) Chiken-roll";
	cout << "\n7) Information regarding sales and collection";
	cout << "\n8) Exit";

	cout << "\n\n Please Enter your choice! ";
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		cout << "\n\n Enter the number of rooms you want: ";
		cin >> Srooms;
		if (Qrooms - Srooms >= Total_rooms)
		{
			Total_rooms += Srooms;
			cout << "\n\n\t\t" << Total_rooms << " room/rooms have been alloted to you";

		}
		else cout << "\n\t Only " << Qrooms - Total_rooms << " Rooms remaining in hotel";
	}
	break;

	case 2:
	{
		cout << "\n\n Enter Pasta Quantity: ";
		cin >> Spasta;
		if (Qpasta - Spasta >= Total_pasta)
		{
			Total_pasta += Spasta;
			cout << "\n\n\t\t" << Total_pasta << " pasta is the order";

		}
		else cout << "\n\t Only " << Qpasta - Total_pasta << " Pasta remaining in hotel";
	}
	break;

	case 3:
	{
		cout << "\n\n Enter Burger Quantity: ";
		cin >> Sburger;
		if (Qburger - Sburger >= Total_burger)
		{
			Total_burger += Sburger;
			cout << "\n\n\t\t" << Total_burger << " Burger is the order";

		}
		else cout << "\n\t Only " << Qburger - Total_burger << " Burger remaining in hotel";
	}
	break;

	case 4:
	{
		cout << "\n\n Enter Noodles Quantity: ";
		cin >> Snoodles;
		if (Qnoodles - Snoodles >= Total_noodles)
		{
			Total_noodles += Snoodles;
			cout << "\n\n\t\t" << Total_noodles << " Noodles is the order";

		}
		else cout << "\n\t Only " << Qnoodles - Total_noodles << " Noodles remaining in hotel";
	}
	break;

	case 5:
	{
		cout << "\n\n Enter Shake Quantity: ";
		cin >> Sshake;
		if (Qshake - Sshake >= Total_shake)
		{
			Total_shake += Sshake;
			cout << "\n\n\t\t" << Total_shake << " Shake is the order";

		}
		else cout << "\n\t Only " << Qshake - Total_shake << " Shake remaining in hotel";
	}
	break;

	case 6:
	{
		cout << "\n\n Enter Chicken-roll Quantity: ";
		cin >> Schicken;
		if (Qchicken - Schicken >= Total_chicken)
		{
			Total_chicken += Schicken;
			cout << "\n\n\t\t" << Total_chicken << " Chicken-roll is the order";

		}
		else cout << "\n\t Only " << Qchicken - Total_chicken << " Chicken-roll remaining in hotel";
	}
	break;
	case 7:
	{
		cout << "\n\n\t\t Details of sales and collection";
		cout << "\n Number of rooms we had: " << Qrooms;
		cout << "\n Number of rooms we gave for rent: " << Total_rooms;
		cout << "\n Remaining room: " << Qrooms - Total_rooms;
		cout << "\n Totals rooms collection for the day: " << Total_rooms * Proom;

		cout << "\n\n Number of Pastas we had: " << Qpasta;
		cout << "\n Number of Pastas we gave for rent: " << Total_pasta;
		cout << "\n Remaining Pastas: " << Qpasta - Total_pasta;
		cout << "\n Totals Pastas collection for the day: " << Total_pasta * Ppasta;

		cout << "\n\n Number of Burgers we had: " << Qburger;
		cout << "\n Number of Burgers we gave for rent: " << Total_burger;
		cout << "\n Remaining Burgers: " << Qburger - Total_burger;
		cout << "\n Totals Burgers collection for the day: " << Total_burger * Pburger;

		cout << "\n\n Number of Noodles we had: " << Qnoodles;
		cout << "\n Number of Noodles we gave for rent: " << Total_noodles;
		cout << "\n Remaining Noodles: " << Qnoodles - Total_noodles;
		cout << "\n Totals Noodles collection for the day: " << Total_noodles * Pnoodles;

		cout << "\n\n Number of Shakes we had: " << Qshake;
		cout << "\n Number of Shakes we gave for rent: " << Total_shake;
		cout << "\n Remaining Shakes: " << Qshake - Total_shake;
		cout << "\n Totals Shakes collection for the day: " << Total_shake * Pshake;

		cout << "\n\n Number of Chicken-roll we had: " << Qchicken;
		cout << "\n Number of Chicken-roll we gave for rent: " << Total_chicken;
		cout << "\n Remaining Chicken-roll: " << Qchicken - Total_chicken;
		cout << "\n Totals Chicken-roll collection for the day: " << Total_chicken * Pchicken;

		cout << "\n\n--------------------------------------------------";
		cout << "\n      Total collection for the day: " << Total_rooms * Proom + Total_pasta * Ppasta +
			Total_burger * Pburger + Total_noodles * Pnoodles + Total_shake * Pshake + Total_chicken * Pchicken;
		cout << "\n\n--------------------------------------------------";
	}
	break;
	case 8:
		exit(0);
	default:
		cout << "\nPlease select the numbers mentioned above!\n";
		break;
	}
	goto m;
	return 0;
}