#include<iostream>
using namespace std;

int main(){
	int la[] = {10,20,30,40,50,60,70,80,90}; 	// Array
	int n = 9;									// Total number of elements in array
	int element = 50;							// Element ot be search
	int loc = 4;								// Location of element
	cout<<n<<endl;
	la[n] = element;
	loc = 1;
	while(la[loc]!=element){
		loc = loc+1;
	}
	if (loc == (n)){
		cout<<"not found";
	}
	else{
		cout<<"present in array";
	} 
	
	return 0;
}
