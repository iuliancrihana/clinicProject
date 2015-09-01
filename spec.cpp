#include"spec.h"


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

char* spec::getNumeSpec(){
	return mNumeSpec;
}
void spec::addMedic(char* numeDoctor){
	mMediciSpecialisti->adaugElem(numeDoctor);
}

void spec::incarcaMediciDinFisier(char* fileName){
	char numeDoctor[50];
	ifstream file (fileName);
	if (file.is_open()) {
		while (!file.eof()) {
			file >> numeDoctor;
			mMediciSpecialisti->adaugElem(numeDoctor);
		}
		file.close();
	}
	else 
		cout << "Nu pot sa accesez fisierul"; 
}


