#include<iostream>
using namespace std;

//Class for Doubly Linked Lists
class node{
	public:
	int data;
	node* next;
	node* prev;
	node(int val)
	{
		data = val;
		prev = NULL;
		next = NULL;
	}
};

void insertAtHead(node* &head, int val) {
	node* n = new node(val);
	n->next = head;
	if (head != NULL) {
		head->prev = n;
	}
	head = n;
}

void insertAtTail(node* &head, int val) {
	if (head == NULL) {
		insertAtHead(head, val);
		return;
	}
	node* n = new node(val);
	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
	n->prev = temp;
}

void print(node *head)
{
	if(head==NULL)
	{
		cout<<"The list id Empty.";
		return;
	}
	if(head->next==NULL)
	{
		cout<<head->data<<"->END";
		return;
	}
	
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"END";		
}

int countNumberOfNodes(node* head)
{
	int n=0;
	while(head->next!= NULL)
	{
		head = head->next;
		n++;
	}
	return n;
}

node* findTail(node* head)
{
	node*tail = head;
	while(tail->next != NULL)
	{
		tail = tail->next;
	}
	return tail;
}

int main() {
	node* head = NULL;
	
	//Creating the Doubly Linked List
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 3);
	insertAtTail(head, 2);
	insertAtTail(head, 1);
	
	//Printing the Linked List
	cout<<"The List is:\n";
	print(head);
	
	//Finding the Tail Node
	node* tail = findTail(head);
	
	bool t=true;
	
	//Pointer for list
	int i=0;
	int j=countNumberOfNodes(head)-1;
	
	//Checking
	while(i<j)
	{
		if(head->data == tail->data)
		{
			head = head->next;
			tail = tail->prev;
			i++;
			j--;
		}
		else
		{
			t=false;
			break;
		}
	}
	
	//Result
	if(t)
		cout<<"\n\nThe given Linked List is Palindromic."<<endl;
	else
		cout<<"\n\nThe given Linked List is NOT Palindromic."<<endl;
	return 0;
}
