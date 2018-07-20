#include <iostream>
using namespace std;

template<typename T>

void insertionSort(T A[], int n) {
	for(int i = 1; i< n ; i++) {				//i=2 nello pseudocodice
		T temp = A[i] ;
		int j = i ;
		while(( j > 0 ) && ( A[j - 1] > temp )) {	//j>1 nello pseudocodice
			A[j] = A[j - 1] ;
			j = j - 1 ;
		}
		A[j] = temp ;
	}
}
