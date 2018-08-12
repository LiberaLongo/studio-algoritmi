//Author: Libera Longo
//previout author: Gianmarco Lusvardi
#ifndef LIST_HPP
#define LIST_HPP

template<typename T>
struct ListElement {
        T value;                //Elemento
        ListElement<T> *succ;   //Successore
        ListElement<T> *pred;   //Predecessore
};

template<typename T>
class List {
private:
        ListElement<T> *testa, *coda;
public:
        List();                 //costruttore di default
        ~List();                //distruttore di default
//      List<T> NewLista();     //costruttore di lista circolare con sentinella
        bool empty();
        ListElement<T> * head();
        ListElement<T> * tail();
        ListElement<T> * next(ListElement<T> * p);
        ListElement<T> * prev(ListElement<T> * p);
        bool finished(ListElement<T> * p);
        T read(ListElement<T> * p);
        void write(ListElement<T> * p, T v);
        ListElement<T> * insert(ListElement<T> * p, T v);
        ListElement<T> * remove(ListElement<T> * p);
};

#endif //LIST_HPP
