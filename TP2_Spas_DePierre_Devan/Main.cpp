// Solution de l'exercice sur l'h�ritage et le polymorphisme
// Il s'agit de d�velopper une hi�rarchie de classes permettant de repr�senter 
// des fruits en g�n�ral. Les fruits que nous d�sirons mod�liser par le biais 
// de cette hi�rarchie ont les attributs suivants que nous d�sirons conserver : 
//
//    L�orange est un agrume qui est d�une certaine vari�t�(�navel�, �valencia�, etc.) 
//    et a un calibre.
// 
//    Le pamplemousse est un agrume ayant un certain type(blanc ou rose), qui est d�une 
//    certaine vari�t�(�marsh�, �star ruby�, etc.) et a un calibre.
// 
//    Le kiwi est un fruit qui a un calibre.
//
//    Tous les fruits ont une provenance(ils peuvent provenir, par exemple, du Qu�bec, 
//    des �tats - Unis, du Mexique, de l�Espagne, de Floride, de Californie, de la 
//    Nouvelle Z�lande, etc.).
//
// par Pierre Prud'homme, 2017
//-----------------------------------------------------------------------------------------------
#include <iostream>
#include "Menu.h"


using namespace std;

int main()
{
	Menu Spas;
	int ChoixCommande;

	try
	{
		do
		{
			Spas.AfficherMenu();//Affiche Menu
			Spas.Commandes(Spas.ChoixCommande());//L'usager choisi le commande et le programme va chercher la fonction responsable...
		} while (true);//Pour le moment
	}
	catch (exception Menu)
	{
		Menu.what();
	}
}

/*Fonctionnement FIFO
deque<Client *> Customers;
Customers.push_front(new Client_Corporatif("Emilie", "Dynamite", "0000-01"));
Customers.push_front(new Client_Particulier("Premier"));
Customers.push_front(new Client_Particulier("Deuxieme"));
Customers.push_front(new Client_Particulier("Troisieme"));
Customers.size();
Customers.pop_back();
Customers.size();
*/
