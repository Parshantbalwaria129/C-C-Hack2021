#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,l,h,mid,n;
    cout<<"Enter no. of elements you want to insert :-"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter nos. in increasing order"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Nos. are:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"Enter element you want to search"<<endl;
    cin>>a;
    l=0;
    h=n;
    int key=-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==a)
        {
            cout<<"No. found at"<<mid;
            key++;
            break;
            
        }
        else 
        if(arr[mid]>a){
            h=mid-1;
                    }
        else
        if(arr[mid]<a){
            l=mid+1;
        }

    }
    if(key==-1){
    cout<<"Not Present";}
}