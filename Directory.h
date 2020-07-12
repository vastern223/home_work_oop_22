#pragma once
#include <iostream>
#include <string>
#include "List.h"

using namespace std;

class Directory//зробив дз як приложение записник
{
private:
	string name_file = "file.txt";
	string 	Company_name;
	string Owner;
	string Phone;
	string Address;
	string Kind_of_activity;
	List directory;

public:

	void Menu();

	void Add_firm();

	void Search_by_Company_name();

	void Search_by_Owner();


	void Search_by_Phone();

	void Search_by_Address();

	void Search_by_Kind_of_activity();

	void Show_all_entries()const;

	void Save_datafile();

	void Load_datafile();

};

