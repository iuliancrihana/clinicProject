#pragma once

#include"tempList_spec.h"
#include"spec.h"

#include<iostream>


using namespace std;

class institutie{
public:
	virtual char* getTipInstitutie()=0;
};

class clinica: public institutie{
protected: 
	char* mNumeClinica;
	int mNrSpec;
	listaTemp<spec>* mListaSpecializari;
public:
	clinica();
	clinica(char* numeClinica);
	char* getNumeClinica();
	void addSpecializare(spec* newSpec);
	void afiseazaListaSpecializari();
	virtual char* getTipInstitutie();
};
