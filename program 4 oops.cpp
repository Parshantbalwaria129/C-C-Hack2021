#include<iostream>
using namespace std;
struct phone{
	int areacode;
	int exchange;
	int number;
	
};
 int main(){
 	 phone p1={122,212,456};
 	 phone p2;
 	 cout<<"\n Enter your area code,exchangeand number :";
 	 cin>>p2.areacode>>p2.exchange>>p2.number;
 	 cout<<"\n My number is "<<"("<<p1.areacode<<")"<<p1.exchange<<"-"<<p1.number;   
 	 cout<<"\n Your no. is"<<"("<<p2.areacode<<")"<<p2.exchange<<"-"<<p2.number<<endl;
}
