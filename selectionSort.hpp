#include <iostream>
using namespace std;

template<typename T>

int min(T A[], int k, int n) {
	int min = k ;
	for(int h = k + 1 ; h< n ; h++) {
		if( A[h] < A[min] )
			min = h ;
	}
	return min;
}

template<typename T>

void selectionSort(T A[], int n) {
	for(int i = 0 ; i< n ; i++) {		//i=1 nello pseudocodice
		int j = min(A, i, n);
		T temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
}
