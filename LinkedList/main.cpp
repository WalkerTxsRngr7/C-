#include <iostream>
using namespace std;


//struct Record{
//	int number;
//	char grade;
//};

/*
Purpose: Working with Linked List
*/



struct Node
{
	int data;
	Node *link;
};
typedef Node* NodePtr;

void insertNode(NodePtr& head, int newNumber);
void displayLinkList(NodePtr& head);
void deleteLinkList(NodePtr& head);
void insertNodePos(NodePtr& head, int pos, int newVal);

int main(int argc, char** argv) {
	
//	Record *r;
//	r = new Record;
	
//	(*r).number = 2011;
//	cout << (*r).number;

//	r->number = 2020;
//	cout << r->number;
	
	NodePtr head; 			//Create head
	head = new Node;
	
	head->data = 3;			//create first node
	head->link = NULL;		
	
	insertNode(head, 100);	//create the second node
	insertNode(head, 500);
	insertNode(head, 800);
	
	displayLinkList(head);
	cout << "*************************\n";
	deleteLinkList(head);
//	displayLinkList(head);
	
	return 0;
}

void insertNodePos(NodePtr& head, int pos, int newVal)
{
	NodePtr here = head;
	NodePtr newNode = new Node;
	
	//create the loop to find the node at position pos
	for (int i = 0; i < pos; i++)
	{
		here = here->link;
	}
	
	newNode->data = newVal;
	newNode->link = here->link;
	here->link = newNode;
}

void deleteLinkList(NodePtr& head)
{
//	NodePtr here = head;
//	NodePtr there = here;
//	while (here != NULL)
//	{
//		cout << "Deleting: " << here->data << endl; 
//		there = there->link;
//		delete here;
//		here = there;
//	}
//	delete head;
//	
	
	//Kirsten's Version
	NodePtr temp = new Node;
	temp = head;
	
	while (temp->link != NULL)
	{
		head = head->link;
		delete temp;
		temp = head;
		cout << temp->data << " and " << head << endl;
	}
	cout << "Last man standing " << temp->data;
	delete temp;
}

void displayLinkList(NodePtr& head)
{
	NodePtr here = head;
	while (here != NULL)
	{
		cout << "The data is: " << here->data << endl; 
		here = here->link;
	}
}

void insertNode(NodePtr& head, int newNumber)
{
	NodePtr tempNode;
	tempNode = new Node;
	tempNode->data = newNumber;
	tempNode->link = head;
	head = tempNode;
}
