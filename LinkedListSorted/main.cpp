#include <iostream>

using namespace std;

/*
	Developer:	Nick Schneider
	Program:	In-Class Linked List
	Purpose:	Lecture on Linked Lists	
*/

struct Node{
	int data;
	Node *link;
};
typedef Node* NodePtr;

void insertNode(NodePtr& head, int newNum);
void displayLinkedList(NodePtr& head);
void deallocateLinkedList(NodePtr& head);
void insertNodePos(NodePtr& head, int pos, int newNum);

int main(int argc, char** argv) {
	
	NodePtr head;
	head = new Node;
	head->data = 3;
	head->link = NULL;
	
	insertNode(head, 100);
	insertNode(head, 500);
//	insertNodePos(head, 2, 250);
	
	displayLinkedList(head);	
	
	
	return 0;
}

void insertNodePos(NodePtr& head, int pos, int newNum){
	NodePtr here = head;
	NodePtr newNode = new Node;
	
	for(int i = 1; i < pos; i++){
		here = here->link;
	}
	newNode->data = newNum;
	newNode->link = here->link;
	here->link = newNode;
}

void deallocateLinkedList(NodePtr& head){
	NodePtr here = new Node;
	here = head;
	while(here!=NULL){		
		head = head->link;		
		delete here;
		here = head;			
	}
	delete here;
}

void displayLinkedList(NodePtr& head){
	NodePtr here = head;
	while(here->link!=NULL){
		cout<<here->data<<" ";
		here = here->link;
	}
	cout<<endl;
}


void insertNode(NodePtr& head, int newNum){
	NodePtr tempNode;
	tempNode = new Node;
	tempNode->data = newNum;
	tempNode->link = head;
	head = tempNode;
}
