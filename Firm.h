#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Firm
{
private:

	string 	Company_name;
	string Owner;
	string Phone;
	string Address;
	string Kind_of_activity;

public:

	Firm();

	Firm(string Company_name, string Owner, string  Phone, string Address, string Kind_of_activity);

	void Show_info()const;

	string Get_Company_name();

	string Get_Owner();

	string Get_Phone();

	string Get_Address();
	
	string Get_Kind_of_activity();

	
	friend ofstream& operator<<(ofstream& fout, const Firm& lap);

	friend ifstream& operator>>(ifstream& fin, Firm& lap);
};




