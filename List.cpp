#include"List.h"


List::List() : head(nullptr), tail(nullptr), size(0) { }

List::List(const List& other)
{
	Node* current = other.head;
	while (current != nullptr)
	{
		AddToTail(current->firm);
		current = current->next;
	}
}

bool List::IsEmpty() const
{
	return size == 0;
}
int List::GetCount() const
{
	return size;
}


void List::AddToHead(Firm firm)
{

	Node* newElem = new Node;
	newElem->firm = firm;
	newElem->next = head;
	newElem->prev = nullptr;

	if (IsEmpty())
	{
		head = tail = newElem;
	}
	else
	{
		head->prev = newElem;
		head = newElem;
	}
	++size;
}

void List::AddToTail(Firm firm)
{
	Node* newElem = new Node;
	newElem->firm = firm;
	newElem->next = nullptr;
	newElem->prev = tail;

	if (IsEmpty())
	{
		head = tail = newElem;
	}
	else
	{
		tail->next = newElem;
		tail = newElem;
	}
	++size;
}

void List::DeleteHead()
{
	if (IsEmpty()) return;
	Node* temp = head->next;
	delete head;

	if (temp == nullptr)
	{
		head = tail = nullptr;
	}
	else
	{
		temp->prev = nullptr;
		head = temp;
	}
	--size;
}

void List::DeleteTail()
{

	if (IsEmpty()) return;

	if (head->next == nullptr)
	{
		delete head;
		head = tail = nullptr;
	}
	else
	{
		Node* temp = tail->prev;
		delete temp->next;
		temp->next = nullptr;
		tail = temp;
	}
	--size;
}

void List::Print_all() const
{ 
	for (Node* current = head; current != nullptr; current = current->next)
	{
		current->firm.Show_info();
		cout << endl;
	}
}

void List::Find__by_Company_name(string firm)
{
	Node* current = head;

	for (int i = 0; i < size; i++)
	{
		if (current->firm.Get_Company_name() == firm)
		{
			current->firm.Show_info();
		}
		current = current->next;
	}
}

void List::Find__by_Owner(string owner)
{
	Node* current = head;

	for (int i = 0; i < size; i++)
	{
		if (current->firm.Get_Owner() == owner)
		{
			current->firm.Show_info();
		}
		current = current->next;
	}
}

void List::Find__by_Phone(string phone)
{
	Node* current = head;

	for (int i = 0; i < size; i++)
	{
		if (current->firm.Get_Phone() == phone)
		{
			current->firm.Show_info();
		}
		current = current->next;
	}
}

void List::Find__by_Address(string address)
{
	Node* current = head;

	for (int i = 0; i < size; i++)
	{
		if (current->firm.Get_Address() == address)
		{
			current->firm.Show_info();
		}
		current = current->next;
	}
}

void List::Find__by_Kind_of_activity(string activity)
{
	Node* current = head;

	for (int i = 0; i < size; i++)
	{
		if (current->firm.Get_Kind_of_activity() == activity)
		{
			current->firm.Show_info();
		}
		current = current->next;
	}
}


void List::DeleteAll()
{
	while (!IsEmpty())
	{
		DeleteHead();
	}
}

List::~List()
{
	DeleteAll();
}


ofstream& operator<<(ofstream& fout, const List& lap)
{
	List::Node* current = lap.head;
	fout << lap.size << endl;
	for (int i = 0; i < lap.size; i++)
	{
		fout << current->firm;
		current = current->next;
	}

	return fout;
}


ifstream& operator>>(ifstream& fin, List& lap)
{
	int size;
	fin >> size;
	for (size_t i = 0; i < size; i++)
	{
		Firm buff;
		fin >> buff;
		lap.AddToTail(buff);
	}
		
	return fin;
 }

