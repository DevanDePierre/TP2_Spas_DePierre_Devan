// Déclaration de la classe Client
//
// par Devan de Pierre, 2017
//-----------------------------------------------------------------------------------------------
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Client
{
public:
	Client(string NomPersonnel_);
	virtual ~Client() {};

protected:
	virtual void RendClasseAbstraite() = 0;
	virtual int GenNumClient();
private:
	int NuméroClient;
	string NomPersonnel;

};



//virtual void Afficher(ostream & out);
