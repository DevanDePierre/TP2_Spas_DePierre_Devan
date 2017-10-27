// Déclaration de la classe Classe_Client_Particulier
//
// par Devan de Pierre, 2017
//-----------------------------------------------------------------------------------------------
#pragma once
#include <string>
#include <iostream>
#include "Classe_Client.h"
using namespace std;

class Client_Particulier : public Client
{
public:
	Client_Particulier(string NomPersonnel_);
	~Client_Particulier() {}

protected:
	void RendClasseAbstraite() {}

private:

};