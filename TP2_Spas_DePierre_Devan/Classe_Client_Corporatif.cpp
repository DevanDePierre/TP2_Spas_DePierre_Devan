// Définition de la classe Classe_Client_Corporatif
//
// par Devan de Pierre, 2017
//-----------------------------------------------------------------------------------------------
#include "Classe_Client_Corporatif.h"
using namespace std;

Client_Corporatif::Client_Corporatif(string NomPersonnel_, string NomCompagnie_, string NCF_) : Client(NomPersonnel_)
{
	NomCompagnie = NomCompagnie_;
	NCF = NCF_;
}