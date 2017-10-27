// Solution de l'exercice sur l'héritage et le polymorphisme
// Il s'agit de développer une hiérarchie de classes permettant de représenter 
// des fruits en général. Les fruits que nous désirons modéliser par le biais 
// de cette hiérarchie ont les attributs suivants que nous désirons conserver : 
//
//    L’orange est un agrume qui est d’une certaine variété(‘navel’, ‘valencia’, etc.) 
//    et a un calibre.
// 
//    Le pamplemousse est un agrume ayant un certain type(blanc ou rose), qui est d’une 
//    certaine variété(‘marsh’, ‘star ruby’, etc.) et a un calibre.
// 
//    Le kiwi est un fruit qui a un calibre.
//
//    Tous les fruits ont une provenance(ils peuvent provenir, par exemple, du Québec, 
//    des États - Unis, du Mexique, de l’Espagne, de Floride, de Californie, de la 
//    Nouvelle Zélande, etc.).
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
