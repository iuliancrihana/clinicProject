#include"listaTemp.h"
#include"clinica.h"
#include"spec.h"

#include<iostream>

#pragma once
using namespace std;

class clinicaSpecializata:public clinica{
public:
	clinicaSpecializata();
	char* getTipInstitutie();
};