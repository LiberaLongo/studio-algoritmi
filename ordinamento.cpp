#include <iostream>

#include "makearray.hpp"
#include "selectionSort.hpp"
#include "insertionSort.hpp"
#include "mergeSort.hpp" 	//non va...
#include "countingSort.hpp"

using namespace std;

const char SELECTIONSORT = 's';
const char INSERTIONSORT = 'i';
const char MERGESORT = 'm';
const char COUNTINGSORT = 'c';
const char QUICKSORT = 'q';
int main() {
	cout << "legenda algoritmi:" << endl;
	cout << "'" << SELECTIONSORT << "' : selectionSort, complessità: theta(n^2)" << endl;
	cout << "'" << INSERTIONSORT << "' : insertionSort, complessità: caso pessimo O(n^2), per sequenze già ordinate theta(n)" << endl;
	cout << "'" << MERGESORT << "' : merge, complessità: O(n); mergeSort, complessità: O(n logn)" << endl;
	cout << "'" << COUNTINGSORT << "' : countingSort, complessità: O(n + k), pochi casi" << endl;
	cout << "'" << QUICKSORT << "' : quickSort, complessità: " << endl;
	cout << "il migliore ordinamento è dato al momento da MergeSort e merge" << endl;

        cout << "inserire un carattere per selezionare quale tipo di algoritmo usare" << endl;
	char chose;
	cin >> chose;

	int n = decideSize();
	int A[n], B[n];
	makeArray(A, n);

	switch(chose) {
		case SELECTIONSORT :
			cout << "SELECTIONSORT";
			selectionSort(A, n);
			break;
		case INSERTIONSORT :
			cout << "INSERTIONSORT";
			insertionSort(A, n);
			break;
		case MERGESORT :
			cout << "MERGESORT";
			MergeSort(A, 0, n-1, B);	//mergeSort(A, 1, n) nello pseudocodice e B è un vettore globale...
			break;
		case COUNTINGSORT :
			cout << "COUNTINGSORT";
			//countingSort(A, n, k) 	//nel libro non specifica come debba essere chiamato
			break;
		case QUICKSORT :
			cout << "QUICKSORT";
			break;
		default:
			break;
	}

	printArray(A, n);

	cout << "\n\n\nspiacenti ma il programma deve essere finito" << endl;
}
