#pragma once

#include"spec.h"
#include"tempList_strings.h"

spec::spec(){
	char inputString[50];
	cout<<"introduce numele specializarii: ";
	cin>>inputString;
	mNumeSpec=new char[strlen(inputString)+1];
	strcpy(mNumeSpec,inputString);

	mMediciSpecialisti=new listaTemp<char*>();
}
spec::spec(char * numeSpec){
	this->mNumeSpec=new char[strlen(numeSpec)+1];
	strcpy(this->mNumeSpec,numeSpec);

	mMediciSpecialisti=new listaTemp<char*>();
}

spec::spec(spec& cSpec){
	this->mNumeSpec=new char[strlen(cSpec.getNumeSpec())+1];
	strcpy(this->mNumeSpec,cSpec.getNumeSpec());

	mMediciSpecialisti=new listaTemp<char*>();

	elemLista <char*>* newHead=cSpec.getListaMedici()->getHead();
	for(int i=0; i<cSpec.getListaMedici()->getLungimeLista(); i++){
		this->mMediciSpecialisti->adaugElem(newHead->getElemValue());
		newHead=newHead->getNextElem();
	}	
}

char* spec::getNumeSpec(){
	return mNumeSpec;
}
void spec::addMedic(char* numeDoctor){
	mMediciSpecialisti->adaugElem(numeDoctor);
}

void spec::incarcaMediciDinFisier(char* fileName){
	char *numeDoctor;
	ifstream file (fileName);
	if (file.is_open()) {
		while (!file.eof()) {
			numeDoctor=new char[50];
			file >> numeDoctor;
			mMediciSpecialisti->adaugElem(numeDoctor);
		}
		file.close();
	}
	else 
		cout << "Nu pot sa accesez fisierul"; 
}

void spec::afiseazaListaMedici(){
	cout<<"====specializarea: "<<mNumeSpec<<"===="<<endl;
	elemLista <char*>* newHead=mMediciSpecialisti->getHead();
	for(int i=0; i<mMediciSpecialisti->getLungimeLista();i++){
		cout<<newHead->getElemValue()<<endl;
		newHead=newHead->getNextElem();
	}
}


bool spec::operator==(spec& elemDeComparat) {
	if(strcmp(mNumeSpec, elemDeComparat.getNumeSpec())==0)
		return true;
	return false;
}
