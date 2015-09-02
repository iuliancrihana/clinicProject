/*#pragma once

#include"listaTemp.h"
#include"spec.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//======================================element spec specializat===========================================
template <>
class elemLista<spec> {
   spec* mElem;
   elemLista<spec> *mNextElem;
public:
	elemLista ();
	elemLista (char* e);
	elemLista (spec& e);
    spec* getElemValue ();
	void setNextElem(elemLista<spec>* oldHead);
	elemLista<spec>* getNextElem ();

	bool operator==(spec& elemDeComparat);
};

elemLista<spec>::elemLista(){
	this->mElem=NULL;
	this->mNextElem=NULL;
}

elemLista<spec>::elemLista(char* e){
	this->mElem=new spec(e);
	this->mNextElem=NULL;
}

elemLista<spec>::elemLista (spec& e){
	this->mElem=new spec(e);
	this->mNextElem=NULL;
}

bool elemLista<spec>::operator ==(spec& elemDeComparat) {
	if(strcmp(mElem->getNumeSpec(), elemDeComparat.getNumeSpec())==0)
		return true;
	return false;
}

spec* elemLista<spec>::getElemValue ()
{
	if(mElem==NULL)
		return 0;
	return mElem;
}

elemLista<spec>* elemLista<spec>::getNextElem ()
{
	return mNextElem;
}


void elemLista<spec>::setNextElem(elemLista<spec>* oldHead)
{
	mNextElem=oldHead;
}

//======================================lista spec specializata===========================================
template <> 
class listaTemp<spec>{
private:
	elemLista<spec> *head;
	int lungimeLista;
public:
	listaTemp();
	listaTemp(char* elemNou);
	elemLista<spec>* getHead(){ return head; }
	int getLungimeLista(){ return lungimeLista; }
	void adaugElem(char* elemNou);
	void adaugElem(spec* elemNou);
	void stergElem(char* elem);
};
listaTemp<spec>::listaTemp(){
	head=NULL;
	lungimeLista=0;
}

listaTemp<spec>::listaTemp(char* elemNou){
	elemLista <spec>* newHead=new elemLista <spec>(elemNou);
	newHead->setNextElem(head);
	head=newHead;
	lungimeLista=1;
}

void listaTemp<spec>::adaugElem(char* specializareNoua){
	elemLista <spec>* newHead=head;
	for(int i=0; i<lungimeLista;i++){
		if(strcmp(newHead->getElemValue()->getNumeSpec(),specializareNoua)==0){
			cout<<"specializare existent"<<endl;
			return;
		}
		newHead=newHead->getNextElem();
	}
	newHead=new elemLista <spec>(specializareNoua);
	newHead->setNextElem(head);
	head=newHead;
	lungimeLista++;
}

void listaTemp<spec>::adaugElem(spec* elemNou){
	elemLista <spec>* newHead=head;
	for(int i=0; i<lungimeLista;i++){
		if(newHead->getElemValue()==elemNou){
			cout<<"element existent"<<endl;
			return;
		}
		newHead=newHead->getNextElem();
	}
	newHead=new elemLista <spec>(*elemNou);
	newHead->setNextElem(head);
	head=newHead;
	lungimeLista++;
}

void listaTemp<spec>::stergElem(char* elem){
	elemLista <spec>* newHead=head;
	if(strcmp(newHead->getElemValue()->getNumeSpec(),elem)==0){
		head=newHead->getNextElem();
		cout<<"element sters"<<endl;
		lungimeLista--;
		return;
	}else{
		for(int i=0; i<lungimeLista-1;i++){
			if(strcmp(newHead->getNextElem()->getElemValue()->getNumeSpec(),elem)==0){
				newHead->setNextElem(newHead->getNextElem()->getNextElem());
				cout<<"element sters"<<endl;
				lungimeLista--;
				return;
			}
			newHead=newHead->getNextElem();
		}
		if(strcmp(newHead->getElemValue()->getNumeSpec(),elem)==0){
				newHead=NULL;
				cout<<"element sters"<<endl;
				lungimeLista--;
				return;
			}
	}
}
*/
