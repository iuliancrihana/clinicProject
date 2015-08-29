#include"listaTemp.h"
#include"spec.h"
class clinica{
private: 
	char* mNumeClinica;
	int mNrSpec;
	listaTemp<spec> mListaSpecializari;
	static clinica* theClinic;							//singleton
public:
	static clinica creazaInstanta(){
		if(theClinic==null)
			theClinic=new clinica();
		return theClinic;
	}
};