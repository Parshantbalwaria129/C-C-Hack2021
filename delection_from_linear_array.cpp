#include<iostream>
using namespace std;
int main(){
    int la[] = {11,12,13,14,155,16,17,18,19,200}; //LA
    int n = 10; // N = Total number of elements
    int item; //Item
    int k = 4; //location
    
    
    
    
	//for(int i=0;i<=9;i++){
	//	cout<<la[i]<<" ";
	//}
	
	
	
	
	item = la[k];
	cout<<endl<<item<<endl;
	int j = k;
	while(j<=(8)){
		//cout<<"hello";
		la[j] = la[j+1];
		cout<<la[j]<<" ";
		j++;
	}
	
	
	cout<<endl;
	for(int i=0;i<=110;i++){
		cout<<la[i]<<" ";
	}
	cout<<endl<<endl<<la[9];
	cout<<endl<<endl<<la[11];
	
	return 0;
}

