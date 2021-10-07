#include<iostream>
using namespace std;
int main(){
	double a,b;
	char op,ans;
	start:
	cout<<"enter first no.,operator and second no.\n";
	cin>>a>>op>>b;
	
	switch(op){
		
		case '+' :
			cout<<"Answer="<<a+b<<endl;
			break;
		case '-':
			cout<<"Answer="<<a-b<<endl;
			break;
		case '*' :
			cout<<"Answer="<<a*b<<endl;
			break;
		default:
			cout<<"Answer="<<a/b<<endl;
	}
	    cout<<"Do another (Y/N)?";
	    cin>>ans;
	      if(ans=='n'|| ans=='N'){
	      	  exit(0);}
	      else{
	      	goto start;}}
