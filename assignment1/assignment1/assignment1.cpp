// assignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "avl.h"

using namespace std;


TreeType<string> avl;
void menu();
void add();
void print();
void search();
void deleteString();

int main()
{
	int option;
	do {
		
		menu();

		cin >> option;

		switch (option)
		{
		case 1:
			add();	//insertion
			break;
		case 2:
			print(); //Inorder print + balance factor
			break;
		case 3:
			search();
			break;
		case 4:
			deleteString();
		}
	} while (option != 5);

	return 0;
}
	
void menu()
{
	cout << "\t\t -- AVL Trees -- .\n\n";
	cout << "\t1)\t Insert into AVL tree.\n";
	cout << "\t2)\t Print AVL tree - Inorder Traversal.\n";
	cout << "\t3)\t Search AVL tree.\n";
	cout << "\t4)\t Delete from tree.\n";

	cout << "\t5)\t Exit application.\n\n\n\n\t\t";
}
void add() {

	string item;
	cout << "\tType string to insert to the AVL tree.\n\n\n\t";
	cin >> item;
	avl.InsertItem(item);
}

void print() {

	avl.Print();
}

void search()
{
	string item = "";
	bool found = false;	
	cout << "Enter item to search the tree for ";
	cin >> item;
	avl.RetrieveItem(item, found);
	if (found == true)
	{
		cout << endl << endl << item << " was found in the tree.\n\n\n";
	}
	else
	{	
		cout << endl << endl << item << " was not found in tree.\n\n\n";
	}

}

void deleteString ()
{
	string item;
	bool found = false;
	cout << "Enter string you want to delete from the tree.\n\n\n";
	cin >> item;
	avl.RetrieveItem(item, found);
	if (found == true)
	{
		avl.DeleteItem(item);

		cout << item << " has been deleted from the tree.\n\n\n";
	}
	else
	{
		cout << endl << endl << item << " was not found in the tree.\n\n\n";
	}

}
