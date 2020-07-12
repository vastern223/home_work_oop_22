#pragma once
#include <iostream>
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

	void Set_Company_name(string Company_name);
	
	void Set_Owner(string Owner);
	
	void Set_Phone(string Phone);
	
	void Set_Address(string Address);
	
	void Set_Kind_of_activity(string Kind_of_activity);


};




