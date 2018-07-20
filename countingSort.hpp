#include <iostream>
using namespace std;

//attenzione counting sort sul libro prende un vettore di interi non di ITEM

void countingSort(int A[], int n, int k) {
	int B[k] ;
	int j;
	for(int i = 0 ; i< k ; i++)	//i=1 nello pseudocodice
		B[i] = 0 ;
	for(j = 0 ; j< n ; j++)		//j=1 nello pseudocodice
		B[A[j]] = B[A[j]] + 1 ;
	j = 0 ;				//j=1 nello pseudocodice
	for(int i = 0 ; i< k ; i++) {	//i=1 nello pseudocodice
		while( B[i] > 0 ) {
			A[j] = i ;
			j = j + 1 ;
			B[i] = B[i] - 1 ;
		}
	}
}
