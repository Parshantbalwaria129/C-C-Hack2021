#include <bits/stdc++.h>
using namespace std;

unsigned countBits(unsigned int number)
{
    return (int)log2(number)+1;
}

int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        
        int x;
        cin>>x;
        
        int pwr=countBits(x)-1;
        int ner_num=pow(2,pwr);
        
        if(x==0)
        cout<<"1"<<"\n";
        
        else if( (x&(x+1)) == 0 )
        cout<<x+1<<"\n";
        
        else if( (x&(x-1)) == 0 )
        cout<<x<<"\n";
        
        else{
            cout<<ner_num<<"\n";
        }
        
    }
    
	return 0;
}
