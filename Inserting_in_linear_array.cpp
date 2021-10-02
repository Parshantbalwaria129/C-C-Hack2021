#include<iostream>
using namespace std;
int main(){
    int la[11] = {11,12,13,14,15,16,17,18,19,20}; //LA
	int k = 5;   //K = location of item where it have to insert
	int n = 10;  // N = total no. of elemets
	int item = 55; //ITEM = item to be inserted
	
	
	int j=n;         		 // step 1
    while(j>=k){     		 // step 2
    	la[j+1] = la[j];	 // step 3
    	j = j-1;			 // step 4
	}	 
    la[k] = item;			 // step 5

	return 0;
}

