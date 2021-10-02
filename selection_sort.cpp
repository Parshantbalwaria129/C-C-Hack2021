#include<iostream>
using namespace std;
void swapping(int &a, int &b) {
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         swap(array[i], array[imin]);
   }
}
int main() {
   int n;
   cout << "Enter length of array : ";
   cin >> n;
   int arr[n];
   for(int i = 0; i<n; i++) {
   		cout << "Enter element " <<(i+1)<<" : ";
      	cin >> arr[i];
   }
   cout << "Unsorted array : ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Sorted array: ";
   display(arr, n);
}