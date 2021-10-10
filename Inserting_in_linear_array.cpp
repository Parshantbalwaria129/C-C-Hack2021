#include<iostream>
using namespace std;
int main(){
    int la[11] = {110,120,130,140,150,160,170,180,190,200}; 
	int k = 5;   
	int n = 10;  
	int item = 55; 
	
	
	int j=n;         		
    while(j>=k){     		
    	la[j+1] = la[j];	 
    	j = j-1;			 
	}	 
    la[k] = item;			 

	return 0;
}

