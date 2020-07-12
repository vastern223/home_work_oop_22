#include"Directory.h"


void Directory::Menu()
{
	int chois;
	do
	{
		system("cls");
		cout << "1-Search by Company name" << endl;
		cout << "2-Search by Owner" << endl;
		cout << "3-Search by Phone" << endl;
		cout << "4-Search by Kind of activity" << endl;
		cout << "5-Show all entries" << endl;
		cout << "6-Save data file" << endl;
		cout << "7-Load data file" << endl;
		cout << "8-Add firm" << endl;
		cout << "0-exit" << endl;
		cout << "->";
		cin >> chois;
		switch (chois)
		{
		case 1:
		{
			Search_by_Company_name();
			system("pause");
		}
		break;
		case 2:
		{
			Search_by_Owner();
			system("pause");
		}
		break;
		case 3:
		{
			Search_by_Phone();
			system("pause");
		}
		break;

		case 4:
		{
			Search_by_Kind_of_activity();
			system("pause");
		}
		break;
		case 5:
		{
			Show_all_entries();
			system("pause");
		}
		break;
		case 6:
		{
			Save_datafile();
		}
		break;
		case 7:
		{
			Load_datafile();
		}
		break;
		case 8:
		{
			Add_firm();
		}
		break;
		}

	} while (chois != 0);
}


void Directory::Add_firm()
{
	cout << "Enter Company name: " << endl;
	cout << "->";
	cin >> Company_name;
	cout << "Enter Owner: " << endl;
	cout << "->";
	cin >> Owner;
	cout << "Enter Phone: " << endl;
	cout << "->";
	cin >> Phone;
	cout << "Enter Address: " << endl;
	cout << "->";
	cin >> Address;
	cout << "Enter Kind_of_activity: " << endl;
	cout << "->";
	cin >> Kind_of_activity;
	directory.AddToHead(Firm(Company_name, Owner, Phone, Address, Kind_of_activity));
}

void Directory::Search_by_Company_name()
{
	cout << "Enter name company" << endl;
	cout << "->";
	cin >> Company_name;
	directory.Find__by_Company_name(Company_name);
}

void Directory::Search_by_Owner()
{
	cout << "Enter name owner" << endl;
	cout << "->";
	cin >> Owner;
	directory.Find__by_Owner(Owner);
}

void Directory::Directory::Search_by_Phone()
{
	cout << "Enter Phone" << endl;
	cout << "->";
	cin >> Phone;
	directory.Find__by_Phone(Phone);
}

void Directory::Directory::Search_by_Address()
{
	cout << "Enter Address" << endl;
	cout << "->";
	cin >> Address;
	directory.Find__by_Phone(Address);
}

void Directory::Search_by_Kind_of_activity()
{
	cout << "Enter Kind of activity" << endl;
	cout << "->";
	cin >> Kind_of_activity;
	directory.Find__by_Phone(Kind_of_activity);
}

void Directory::Show_all_entries()const
{
	directory.Print_all();
}

void Directory::Save_datafile()
{
	ofstream fout(name_file);
	directory.Save_data_to_file(fout, directory);
	fout.close();
}
void  Directory::Load_datafile()
{
	ifstream fin(name_file);
	directory.Load_data_to_file(fin, directory);
	fin.close();
}