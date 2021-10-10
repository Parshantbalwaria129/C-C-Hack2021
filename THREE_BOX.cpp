#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        
        int spaceLeft=d-a;

        if(spaceLeft>=(b+c)){
            cout<<"1"<<"\n";
        }
        else if(spaceLeft>=b || spaceLeft>=c){
            cout<<"2"<<"\n";
        }
        else if(d>=(b+c)){
            cout<<"2"<<"\n";
        }
        else
        cout<<"3"<<"\n";
        
    }
	return 0;
}
