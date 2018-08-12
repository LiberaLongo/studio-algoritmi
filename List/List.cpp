//author: Libera Longo

template<typename T>
				//pseudocodice (compila ma non sono sicura di aver fatto giusto)
List<T>::List() {		//LIST List()
	ListElement<T> t;	//	LIST t <- new List
	t.pred = t;		//	t.pred <- t
	t.succ = t;		//	t.succ <- t
	this = t;		//	return t
}

template<typename T>
List<T>::~List() {
}

template<typename T>
bool List<T>::empty() {
	return (this.pred == this.succ == this);
}

template<typename T>
ListElement<T> * List<T>::head() {
	return this.succ;
}

template<typename T>
ListElement<T> * List<T>::tail() {
	return this.pred;
}

template<typename T>
ListElement<T> * List<T>::next(ListElement<T> * p) {
	return p.succ;
}

template<typename T>
ListElement<T> * List<T>::prev(ListElement<T> * p) {
	return p.pred;
}

template<typename T>
bool List<T>::finished(ListElement<T> * p) {
	return (p == this);
}

template<typename T>
T List<T>::read(ListElement<T> * p) {
	return p.value;
}

template<typename T>
void List<T>::write(ListElement<T> * p, T v) {
	p.value = v;
}

template<typename T>
ListElement<T> * List<T>::insert(ListElement<T> * p, T v) {
	ListElement<T> t;
	t.value = v;
	t.pred = p.pred;
	t.pred.succ = t;
	t.succ = p;
	p.pred = t;
	return t;
}

template<typename T>
ListElement<T> * List<T>::remove(ListElement<T> * p) {
	p.pred.succ = p.succ;
	p.succ.pred = p.pred;
	ListElement<T> t = p.succ;
	delete p;
	return t;
}
