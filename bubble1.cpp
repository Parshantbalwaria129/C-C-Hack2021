#include <iostream> 
using namespace std; 
void swap(int *xp, int *yp) { 
int temp = *xp; 
*xp = *yp; 
*yp = temp; 
} 
void bubbleSort(int *arr, int n) { 
for (int i = 0; i < n-1; i++) {
int flag = 0;
for (int j = 0; j < n-i-1; j++) {
if (arr[j] > arr[j+1]) {
swap(&arr[j], &arr[j+1]);
flag = 1;
}
}
if (flag == 0){break;}
}
} 
void printArray(int arr[], int size) { 
int i; 
for (i = 0; i < size; i++) 
cout << arr[i] << " "; 
cout << endl; 
} 
 
int main() { 
int n; 
cout<<"Enter length of array : ";
cin>>n;
int arr[n]; 	
for(int i = 0; i<n; i++) {
   		cout << "Enter element " <<(i+1)<<" : ";
      	cin >> arr[i];
   }
cout<<"Unsorted array : "; 
printArray(arr, n); 
bubbleSort(arr, n); 
cout<<"Sorted array : "; 
printArray(arr, n); 
return 0; 
}

