#include <iostream>

string symmetricCrypt(string str, string chave){
	unsigned long valor = 0, chave_int = 0;
	string strC = "";

    for(int aux = 0; aux < str.length(); ){
        for(int i = 0; i < chave.length(); i++){
            chave_int = chave[i];
            valor = str[aux] * chave_int;
            strC += (unsigned char) valor;
            aux++;
        }
    }

    return strC;
}

string symmetricDecrypt(string str, string chave){
    unsigned long valor = 0, pos_chave = 0;
	string strDec = "";

	for(int i = 0; i < str.length(); i++){
		valor  = str[i];
		valor /= chave[pos_chave];
		strDec += (char) valor;

		if(pos_chave == (chave.length() - 1)){
            pos_chave=0;
        }else{
            pos_chave++;
        }
	}

	return strDec;
}
