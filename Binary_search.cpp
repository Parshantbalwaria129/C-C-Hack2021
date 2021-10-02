// #include<iostream>
// using namespace std;

// int main(){
// 	int dataa[] = {10,20,30,40,50,60,70,80,90,100,110,120}; //Array	
// 	int loc;  										//Location of element
// 	int item = 60;									//Item to search
// 	int beg = 0,end = 11, mid = ((beg+end)/2);		//Step 1, BEG = LB, END = UB, MID = INT((BEG+END)/2) 
// 	while(beg<=end){								//Step 2, BEG <= END
// 		if (dataa[mid] == item){					//step 2, DATA[MID] = ITEM
// 			break;
// 		}
// 		if(item<dataa[mid]){						//Step 3, ITEM < DATA[MID]
// 			end = mid-1;							//		  END = MID - 1
// 		}
// 		else{										//        ELSE
// 			beg = mid+1;}							//		  BEG = MID + 1
// 		mid = int((beg+end)/2);						//Step 4, MID = INT((BEG + END)/2)
// 	}
// 	if (dataa[mid] == item){						//Step 5, IF DATA[MID] = ITEM
// 		loc = mid;									//  	  LOC = MID
// 		cout<<"Index of item : "<<loc;
// 	}
// 	else{											// 		  ELSE
// 		cout<<"Item not found";						//		  LOC = NULL
// 	}
// 	return 0;
// }

#include <iostream>
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