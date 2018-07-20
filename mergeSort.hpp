#include <iostream>
using namespace std;

//attenzione il libro dice che B è un paramentro globale di conseguenza lo dichiaro nel main e lo faccio passare come parametro
//questo perchè voglio usare merge come funzione usata presumibilmente da più di un programma

template<typename T>

void Merge(T A[], int primo, int ultimo, int mezzo, T B[]) {
	int i, j, k, h ;
	i = primo ;
	j = mezzo + 1 ;
	k = primo ;
	while(( i <= mezzo ) && ( j <= ultimo )) {
		if( A[i] <= A[j] ) {
			B[k] = A[i] ;
			i = i + 1 ;
		} else {
			B[k] = A[j] ;
			j = j + 1 ;
		}
		k = k + 1 ;
	}
	j = ultimo ;
	for( h = mezzo ; h>= i ; h-- ) {		//compresi
		A[j] = A[h] ;
		j = j - 1 ;
	}
	for( j = primo ; j<= k - 1 ; j++) {		//compresi
		A[j] = B[j] ;
	}
}

template<typename T>

void MergeSort(T A[], int primo, int ultimo,T B[]) {
	if( primo < ultimo ) {
		int mezzo = (primo + ultimo) / 2 ;	//viene automaticamente presa la parte intera essendo mezzo intero
		MergeSort(A, primo, mezzo, B);
		MergeSort(A, mezzo + 1, ultimo, B);
		Merge(A, primo, ultimo, mezzo, B);
	}
}
