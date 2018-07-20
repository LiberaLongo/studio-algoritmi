#include <iostream>
#include "makearray.hpp"
using namespace std;

template<typename T>

//precondition: A è un vettore ordinato in modo crescente

int binarysearch(T A[], T v, int i, int j) {
	if( i > j )
		return -1 ; 	//return 0 nello pseudocodice
	else{
		int m = ( i + j ) / 2 ; //essendo m intero prende automaticamente la parte intera
		if( A[m] == v )
			return m;
		else if( A[m] < v )
			return binarysearch(A, v, m + 1, j) ;
		else
			return binarysearch(A, v, i, m - 1) ;
	}
}

template<typename T>

//precondition: A continua a essere un vettore ordinato in modo crescente

int iterativebinarysearch(T A[], int n, T v) {
	int i = 0 ;				//i=1 nello pseudocodice
	int j = n ;
	int m = ( i + j ) / 2 ;
	while(( i < j ) && ( A[m] != v )) {
		if( A[m] < v )
			i = m + 1 ;
		else
			j = m - 1 ;
		m = ( i + j ) / 2 ;
	}
	if(( i > j ) || ( A[m] != v ))
		return -1 ;			//return 0 nello pseudocodice
	else
		return m ;
}

int main() {
	int v;
	int n = decideSize();
        int A[n];
	cout << "Ora devi inserire i numeri in ordine CRESCENTE" << endl;
        makeArray(A, n);
	cout << "Devo cercare la posizione dell'elemento V del vettore A. V = ";
	cin >> v;
	cout << "secondo binary search RICORSIVA" << endl;
        int b = binarysearch(A, v, 0, n);	//binarysearch(A, v, 1, n) nello pseudocodice
	cout << b << endl;
	cout << "secondo binary search ITERATIVA" << endl;
	b = iterativebinarysearch(A, n, v);
        cout << b << endl;
}
