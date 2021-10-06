#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <climits>
#include <functional>

using namespace std;

class List
{
public:
    int val = 0;
    List *next = nullptr;

    List(int val)
    {
        this->val = val;
    }
};

void insertBeg(List* &head, int val)
{
	if(head==NULL)
	{
		head = new List(val);
		return;
	}
	List* n = new List(val);
	n->next = head;
	head = n;
}

void print(List *head)
{
	List *p=head;
	while(p!=NULL)
	{
		cout<<p->val<<"->";
		p=p->next;
	}
	cout<<"NULL"<<endl;
}

List *mid(List *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    List *slow = head, *fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	List *head = new List(7);
	//Creating the linked List
	insertBeg(head,6);
	insertBeg(head,5);
	insertBeg(head,4);
	insertBeg(head,3);
	insertBeg(head,2);
	insertBeg(head,1);

	//Printing the List
	cout<<"The Linked List is\n";
	print(head);

	//The Middle Node
	List *Middle = mid(head);

	//Printing the value of middle node
	cout<<"\nThe middle node of the linked list is "<<Middle->val;

	return 0;
}