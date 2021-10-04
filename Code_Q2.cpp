
#include <iostream>
#include<conio.h>
using namespace std;

int equilibrium(int arr[], int n)
{
	int i, j;
	int leftsum, rightsum;

	for (i = 0; i < n; ++i)
	{	

		leftsum = 0;
		for (j = 0; j < i; j++)
			leftsum += arr[j];

		rightsum = 0;
		for (j = i + 1; j < n; j++)
			rightsum += arr[j];

		if (leftsum == rightsum)
			return i;
	}


	return -1;
}


int main()
{
   int n;
   cout<<"enter no. of elements: ";
   cin>>n;
   int arr[n];
   int i;
   cout<<"enter the elements in an array:" <<endl;
   for(i = 0; i < n; i++){
       cin>>arr[i];
   }
    
	int arr_size = n;
	cout << equilibrium(arr, arr_size);
	return 0;
}


