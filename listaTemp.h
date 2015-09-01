#include<iostream>
using namespace std;

////////////////////////////////////////element din lista////////////////////////////////////////

template <class T>
class elemLista {
   T* mElem;
   elemLista<T> *mNextElem;
public:
	elemLista ();
	elemLista (T e);
    T getElemValue ();
	void setNextElem(elemLista<T>* oldHead);
	elemLista<T>* getNextElem ();
};

template <class T>
T elemLista<T>::getElemValue ()
{
	if(mElem==NULL)
		return 0;
	return *mElem;
}

template <class T>
elemLista<T>* elemLista<T>::getNextElem ()
{
	return mNextElem;
}
template <class T>
void elemLista<T>::setNextElem(elemLista<T>* oldHead)
{
	mNextElem=oldHead;
}
template <class T>
elemLista<T>::elemLista(){
	this->mElem=NULL;
	this->mNextElem=NULL;
}
template <class T>
elemLista<T>::elemLista(T e){
	this->mElem=new T(e);
	this->mNextElem=NULL;
}
/*-------------------------------specific pentru o clasa----------------------*/
//template <>
//elemLista<int>::elemLista(int e){
//	this->mElem=new int(5);
//	this->mNextElem=NULL;
//}
/////////////////////////////////////////////lista//////////////////////////////////////////////
template <class T> 
class listaTemp{
private:
	elemLista<T> *head;
	int lungimeLista;
public:
	listaTemp();
	listaTemp(T elemNou);
	T* getHead(){ return head; }
	int getLungimeLista(){ return lungimeLista; }
	void adaugElem(T elemNou);
	void stergElem(T elem);
};
template<class T>
listaTemp<T>::listaTemp(){
	head=NULL;
	lungimeLista=0;
}
template<class T>
listaTemp<T>::listaTemp(T elemNou){
	elemLista <T>* newHead=new elemLista <T>(elemNou);
	newHead->setNextElem(head);
	head=newHead;
	lungimeLista=1;
}

template<class T>
void listaTemp<T>::adaugElem(T elemNou){
	elemLista <T>* newHead=head;
	for(int i=0; i<lungimeLista;i++){
		if(newHead->getElemValue()==elemNou){
			cout<<"element existent"<<endl;
			return;
		}
		newHead=newHead->getNextElem();
	}
	newHead=new elemLista <T>(elemNou);
	newHead->setNextElem(head);
	head=newHead;
	lungimeLista++;
}

template<class T>
void listaTemp<T>::stergElem(T elem){
	elemLista <T>* newHead=head;
	if(newHead->getElemValue()==elem){
		head=newHead->getNextElem();
		cout<<"element sters"<<endl;
		lungimeLista--;
		return;
	}else{
		for(int i=0; i<lungimeLista-1;i++){
			if(newHead->getNextElem()->getElemValue()==elem){
				newHead->setNextElem(newHead->getNextElem()->getNextElem());
				cout<<"element sters"<<endl;
				lungimeLista--;
				return;
			}
			newHead=newHead->getNextElem();
		}
		if(newHead->getElemValue()==elem){
				newHead=NULL;
				cout<<"element sters"<<endl;
				lungimeLista--;
				return;
			}
	}
}