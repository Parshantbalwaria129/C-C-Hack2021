#include<bits/stdc++.h>
using namespace std;

int dig_present(int num,int digit){
    string dig_st = "";
    dig_st = to_string(digit);

    string number_st="";
    number_st = to_string(num);
    
    int size = number_st.size();
        
    int index = number_st.find(dig_st);
    
    if(index>=0 && index<size)
    return index;
    else
    return -1;
}

int dig_rem(int num,int digit){
    int idx = dig_present(num,digit);
    
    if(idx == -1)
        return 0;
    else{
        string number_st="";
        number_st = to_string(num);
        int size = number_st.size();
        
        int pwr = (size-idx-1);
        int multi = pow(10,pwr);
        
        int new_number = (((num/multi)+1)*multi);
        
        int answer = new_number - num;
        return answer+ dig_rem(new_number,digit);
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        
        int num,dig;
        cin>>num>>dig;
        
        int ans = dig_rem(num,dig);
        cout<<ans<<"\n";
        
        
    }
    
    return 0;
}