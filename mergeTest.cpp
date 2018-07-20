#include <iostream>
#include "makearray.hpp"
#include "mergeSort.hpp"
using namespace std;

int main() {
	int n = decideSize();
	int A[n], B[n];
	makeArray(A, n);
	MergeSort(A, 0, n-1, B);	//mergeSort(A, 1, n) nello pseudocodice
	printArray(A, n);
}
