// This program will create a sequence of randomly generated numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int randomNumber;
    size_t count = 5;
    int min = 1;
    int max = 6;

    cout<<"RAND_MAX on this system: "<<RAND_MAX<<endl;
    srand(time(nullptr));

    for(int i=0; i<count; i++){
        randomNumber = rand() % (max - min + 1) + min;
        cout<<randomNumber<<" ";
    }
}

/*
    SAMPLE OUTPUT
    
    RAND_MAX on this system: 32767
    3 1 5 1 1   
*/
