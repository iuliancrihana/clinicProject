#include"listaTemp.h"
#include <iostream>
#include <fstream>
#include <string>

#pragma once
using namespace std;

class spec{
	char* mNumeSpec;
	listaTemp<char*>* mMediciSpecialisti;
public:
	spec();
	spec(char* numeSpec);
	char* getNumeSpec();
	void addMedic(char* numeDoctor);
	void incarcaMediciDinFisier(char* fileName);
	void afiseazaListaMedici();
};
