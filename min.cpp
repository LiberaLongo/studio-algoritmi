#include <iostream>
#include "makearray.hpp"
using namespace std;

template<typename T>

T min (T A[], int n) {
	T min = A[0];			//min = A[1] nello pseudocodice
	for(int i=1; i<n; i++) {	//i=2 nello pseudocodice
		if(A[i] < min)
			min = A[i];
	}
	return min;
}

int main() {
	int n = decideSize();
	int A[n];
	makeArray(A, n);
	int b = min(A, n);
	cout << b << endl;
}
