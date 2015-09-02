#include"spec.h"
#include"clinica.h"

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
	spec*x=new spec("berarie");
	x->addMedic("drojdie");
	
	spec*y=new spec("chirurgie");
	y->incarcaMediciDinFisier("doctori.txt");

	spec*xx=new spec(*y);
	xx->afiseazaListaMedici();
	y->afiseazaListaMedici();

	/* test supraincarcarea ==
	if(*xx==*y)
		cout<<"ura";
	*/
	//clinica*z=new clinica("berarie");
	//z->addSpecializare(x);
	//z->addSpecializare(y);
	//z->afiseazaListaSpecializari();

}
