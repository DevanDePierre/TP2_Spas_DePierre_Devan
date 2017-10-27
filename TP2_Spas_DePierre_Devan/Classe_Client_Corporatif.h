// Déclaration de la classe Classe_Client_Corporatif
//
// par Devan de Pierre, 2017
//-----------------------------------------------------------------------------------------------
#pragma once
#include <string>
#include <iostream>
#include "Classe_Client.h"
using namespace std;

class Client_Corporatif : public Client
{
public:
	Client_Corporatif(string NomPersonnel_ ,string NomCompagnie_ , int NCF_);
	~Client_Corporatif() {}
protected:
	void RendClasseAbstraite() {}
private:
	string NomCompagnie;
	int NCF; //Numéro Compte Facturable;
};
