#pragma once

#include"listaTemp.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//======================================element char* specializat===========================================
listaTemp<char*>::listaTemp(){
	head=NULL;
	lungimeLista=0;
}

listaTemp<char*>::listaTemp(char* elemNou){
	elemLista <char*>* newHead=new elemLista <char*>(elemNou);
	newHead->setNextElem(head);
	head=newHead;
	lungimeLista=1;
}

void listaTemp<char*>::adaugElem(char* elemNou){
	elemLista <char*>* newHead=head;
	for(int i=0; i<lungimeLista;i++){
		if(strcmp(newHead->getElemValue(),elemNou)==0){
			cout<<"element existent"<<endl;
			return;
		}
		newHead=newHead->getNextElem();
	}
	newHead=new elemLista <char*>(elemNou);
	newHead->setNextElem(head);
	head=newHead;
	lungimeLista++;
}

void listaTemp<char*>::stergElem(char* elem){
	elemLista <char*>* newHead=head;
	if(strcmp(newHead->getElemValue(),elem)==0){
		head=newHead->getNextElem();
		cout<<"element sters"<<endl;
		lungimeLista--;
		return;
	}else{
		for(int i=0; i<lungimeLista-1;i++){
			if(strcmp(newHead->getNextElem()->getElemValue(),elem)==0){
				newHead->setNextElem(newHead->getNextElem()->getNextElem());
				cout<<"element sters"<<endl;
				lungimeLista--;
				return;
			}
			newHead=newHead->getNextElem();
		}
		if(strcmp(newHead->getElemValue(),elem)==0){
				newHead=NULL;
				cout<<"element sters"<<endl;
				lungimeLista--;
				return;
			}
	}
}

