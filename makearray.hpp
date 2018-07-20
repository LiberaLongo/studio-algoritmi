#include <iostream>
using namespace std;

const int MAX = 20;

int decideSize() {
	int n;
        do {
                cout << "Inserisci un numero > 0 non troppo grande ( < " << MAX << " )\nN = ";
                cin >> n;
        } while(n < 0 || n > 20);
	return n;
}

template<typename T>

void makeArray (T A[], int n) {
	for(int i=0; i<n; i++) {
                cout << "A[" << i << "]=";
                cin >> A[i];
        }
}

template<typename T>

void printArray (T A[], int n) {
	cout << "\nA[] = [";
	for(int i=0; i<n; i++) {
		cout << A[i];
		if(i != (n-1))
			cout << ",";
	}
	cout << "]\n";
}

template<typename T>

void printPartially(T A[], int primo, int ultimo) {
	cout << "\nA[] = [";
        for(int i=primo; i<ultimo; i++) {
                cout << A[i];
                if(i != (ultimo-1))
                        cout << ",";
        }
        cout << "]\n";
}
