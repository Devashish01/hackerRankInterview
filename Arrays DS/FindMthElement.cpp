//C++ Program to Find Mth element after K Right Rotations of an Array
/*
Test case:
Input: arr[] = {3, 4, 5, 23}, K = 2, M = 1 
Output: 5 
Explanation: 
The array after first right rotation a1[ ] = {23, 3, 4, 5} 
The array after second right rotation a2[ ] = {5, 23, 3, 4} 
1st element after 2 right rotations is 5.
Input: arr[] = {1, 2, 3, 4, 5}, K = 3, M = 2 
Output: 4 
Explanation: 
The array after 3 right rotations has 4 at its second position.


*/

// C++ program to implement
// the above approach
#include<bits/stdc++.h>
using namespace std;

// Function to return Mth element of
// array after k right rotations
int getFirstElement(int a[], int N,
					int K, int M)
{
	// The array comes to original state
	// after N rotations
	K %= N;
	int index;

	// If K is greater or equal to M
	if (K >= M)

		// Mth element after k right
		// rotations is (N-K)+(M-1) th
		// element of the array
		index = (N - K) + (M - 1);

	// Otherwise
	else

		// (M - K - 1) th element
		// of the array
		index = (M - K - 1);

	int result = a[index];

	// Return the result
	return result;
}

// Driver Code
int main()
{
	int a[] = { 1, 2, 3, 4, 5 };

	int N = sizeof(a) / sizeof(a[0]);

	int K = 3, M = 2;

	cout << getFirstElement(a, N, K, M);

	return 0;
}
