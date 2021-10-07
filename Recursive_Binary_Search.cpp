#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <climits>
#include <functional>

using namespace std;

int recursive_binary_search(int arr[], int s, int e, int k)
{
	if(s<=e)
	{
		int m=(s+e)/2;
		if(k==arr[m]) return m;
		if(k>arr[m]) return recursive_binary_search(arr, m+1,e,k);
		return recursive_binary_search(arr, s,m-1,k);
	}
	return -1;
}

int main()
{	
	int n=5;
	int arr[n] = {102, 105, 112, 127, 130};
	int searchElement = 112;
	cout<<"In the given array "<<searchElement<<" is at index "<<recursive_binary_search(arr, 0,n-1,searchElement)<<".";

}