#include"listaTemp.h"
#include"spec.h"

#include<iostream>

#pragma once
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
	virtual char* getTipInstitutie();
};