#include <iostream>
using namespace std;

struct Node
{
	int value;
	Node *next;
};

class LinkedList
{
	Node *head = NULL;

public:
	void insertAtHead(int value)
	{
		Node *node = new Node;
		node->value = value;

		if (head == NULL)
		{
			node->next = NULL;
		}
		else
		{
			node->next = head;
		}
		head = node;
	}

	void insertAtEnd(int value)
	{
		Node *node = new Node;
		node->value = value;
		node->next = NULL;

		Node *flag = head;
		while (flag->next != NULL)
		{
			flag = flag->next;
		}

		flag->next = node;
	}

	void displayList()
	{
		Node *flag = head;
		while (flag != NULL)
		{
			cout << "->" << flag->value;
			flag = flag->next;
		}
		cout << endl;
	}
};

int main()
{
	int choice, value;
	LinkedList linkedList;

	while (1)
	{
		int exit = 0;
		cout << "Enter 1 to add node to the beginning, 2 to add to the end, 3 to print the linked list & -1 to exit :" << endl;
		cin >> choice;

		switch (choice)
		{
		case -1:
			exit = 1;
			break;
		case 1:
			cout << "Enter a value :" << endl;
			cin >> value;
			linkedList.insertAtHead(value);
			break;
		case 2:
			cout << "Enter a value :" << endl;
			cin >> value;
			linkedList.insertAtEnd(value);
			break;
		case 3:
			linkedList.displayList();
			break;
		}

		if (exit == 1)
		{
			break;
		}
	}
	return 0;
}
