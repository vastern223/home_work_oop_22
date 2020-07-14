#include"Firm.h"


Firm::Firm() : Company_name("no_name"), Owner("no_owner"), Phone("no_phone"), Address("no_adress"), Kind_of_activity("no_activity") { }

Firm::Firm(string Company_name, string Owner, string  Phone, string Address, string Kind_of_activity) : Company_name(Company_name), Owner(Owner), Phone(Phone), Address(Address), Kind_of_activity(Kind_of_activity) { }

void Firm:: Show_info()const
{
	cout << "Company name: " << Company_name << endl;
	cout << "Owner: " << Owner << endl;
	cout << "Phone: " << Phone << endl;
	cout << "Address: " << Address << endl;
	cout << "Kind_of_activity: " << Kind_of_activity << endl;
}

string Firm:: Get_Company_name()
{
	return 	Company_name;
}


string Firm::Get_Owner()
{
	return 	Owner;
}

string Firm::Get_Phone()
{
	return 	Phone;
}

string Firm::Get_Address()
{
	return 	Address;
}

string Firm::Get_Kind_of_activity()
{
	return 	Kind_of_activity;
}



ofstream& operator<<(ofstream& fout, const Firm& lap)
{
	
	 fout << lap.Company_name<< endl;
	 fout << lap.Owner << endl;
	 fout << lap.Phone << endl;
	 fout << lap.Address << endl;
	 fout << lap.Kind_of_activity << endl;

	
	return fout;
}

ifstream& operator>>(ifstream& fin, Firm& lap)
{
	fin >> lap.Company_name;
	fin >> lap.Owner;
	fin >> lap.Phone;
	fin >> lap.Address;
	fin >> lap.Kind_of_activity;

	return fin;
}

