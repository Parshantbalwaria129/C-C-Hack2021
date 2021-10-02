// #include<iostream>

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int count, i, arr[30], num, first, last, middle;
	cout << "Enter the number of elements you want in the array : "; 
        cin>>count;

	for (i=0; i<count; i++)
	{
		cout<<"Enter number "<<(i+1)<<": "; 
                cin>>arr[i];
	}
	cout<<"Enter the number that you want to search:"; 
        cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<"Element "<<num<<" found in the array at the location "<<middle+1<<"\n"; 

                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; 
        } 
        if(first > last)
	{
	   cout<<"Element "<<num<<" not found in the array";
	}
	cin>>count;
	return 0;
}
