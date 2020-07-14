#pragma once
#include <iostream>
#include <string>
#include "Firm.h"
#include <fstream>
using namespace std;

class List
{
private:

	struct Node
	{
		Firm firm;
		Node* next;
		Node* prev;
	};

	Node* head;
	Node* tail;

	int size;

public:

	List();

	List(const List& other);
	
	bool IsEmpty() const;
	
	int GetCount() const;
	
	void AddToHead(Firm firm);
	
	void AddToTail(Firm firm);
	
	void DeleteHead();
	
	void DeleteTail();
	
	void Print_all()const;

	void Find__by_Company_name(string firm);
	
	void Find__by_Owner(string owner);
	
	void Find__by_Phone(string phone);
	
	void Find__by_Address(string address);
	
	void Find__by_Kind_of_activity(string activity);
	
	void DeleteAll();
	
	~List();
	
	friend ofstream& operator<<(ofstream& fout, const List& lap);

	friend ifstream& operator>>(ifstream& fin, List& lap);
	
};

