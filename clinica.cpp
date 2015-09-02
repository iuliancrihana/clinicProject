/*#include"clinica.h"


clinica::clinica(){
	char inputString[50];
	cout<<"introduce numele clinicii: ";
	cin>>inputString;
	mNumeClinica=new char[strlen(inputString)+1];
	strcpy(mNumeClinica,inputString);

	mListaSpecializari=new listaTemp<spec>();
	mNrSpec=0;
}

clinica::clinica(char* numeClinica){
	this->mNumeClinica=new char[strlen(numeClinica)+1];
	strcpy(this->mNumeClinica,numeClinica);

	mListaSpecializari=new listaTemp<spec>();
	mNrSpec=0;
}

void clinica::addSpecializare(spec* newSpec){
	mListaSpecializari->adaugElem(newSpec);
}

void clinica::afiseazaListaSpecializari(){
	cout<<"========clinica: "<<mNumeClinica<<"========"<<endl;
	elemLista <spec>* newHead=mListaSpecializari->getHead();
	for(int i=0; i<mListaSpecializari->getLungimeLista();i++){
		newHead->getElemValue()->afiseazaListaMedici();
	}
}

char* clinica::getTipInstitutie(){
	return "clinica";
}*/
