#pragma once

#include"listaTemp.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class spec{
	char* mNumeSpec;
	listaTemp<char*>* mMediciSpecialisti;
public:
	spec();
	spec(char* numeSpec);
	spec(spec& cSpec);
	listaTemp<char*>* getListaMedici(){return mMediciSpecialisti;}
	char* getNumeSpec();
	void addMedic(char* numeDoctor);
	void incarcaMediciDinFisier(char* fileName);
	void afiseazaListaMedici();

	bool operator==(spec& elemDeComparat);
};
