#include<iostream>
using namespace std;
struct xy{
	int x,y;
};

void add(struct xy s1, struct xy s2){
	cout<<"Coordinates of P1+P2 are :"<<s1.x+s2.x<<","<<s1.y+s2.y<<endl;
}
int main()
{
	struct xy s1,s2;
	cout<<"Enter the X and Y coordinates of P1 :"<<endl;
	cin>>s1.x>>s1.y;
	cout<<"Enter the X and Y coordinates of P2 :"<<endl;
	cin>>s2.x>>s2.y;
	add(s1,s2);
		return 0;
}

