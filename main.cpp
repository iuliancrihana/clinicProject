#include"listaTemp.h"
#include"spec.h"
#include<iostream>

using namespace std;

#pragma once

void main(){
	/*elemLista <int>* xx=new elemLista <int>(3);

	listaTemp<int> *x=new listaTemp<int>(3);
	x->adaugElem(4);
	x->stergElem(3);
	x->stergElem(4);
	
	getchar();*/
	spec*x=new spec();
	x->addMedic("drojdie");
	x->incarcaMediciDinFisier("doctori.txt");
}