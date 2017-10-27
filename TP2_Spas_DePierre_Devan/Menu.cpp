// Définition de le la classe Menu
//
// par Devan de Pierre, 2017
//-----------------------------------------------------------------------------------------------
#include "Menu.h"

void Menu::AfficherMenu()
{
	cout << "*****************Spas - De Pierre - Main Menu:*****************" << endl << endl;
	cout << "1. Liste des masseurs et masseuses de notre personnel du jour" << endl;
	cout << "2. Ajouter un masseur / masseuse a notre personnel du jour" << endl;
	cout << "3. Retirer un masseur / masseuse a notre personnel du jour" << endl;
	cout << "4. Ajouter un client corporatif en file d'attente" << endl;
	cout << "5. Ajouter un client particulier en file d'attente" << endl;
	cout << "6. Retirer un client d’une file" << endl;
	cout << "7. Afficher l'etat du systeme" << endl << endl;
	cout << "8. Quitter" << endl << endl;
	cout << "Votre choix: ";
}

int Menu::ChoixCommande()
{
	int Commande = 0;
	cin >> Commande;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while(Commande > MaxChoix || Commande <= MinChoix)
	{
		cout << endl;
		cout << "Choix invalide, veuillez reessayer: ";
		cin.clear();
		cin >> Commande;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return Commande;
}

void Menu::Commandes(int Choix)
{
	switch (Choix)
	{
	case 1:
		//Liste des masseurs et masseuses de notre personnel du jour
		break;
	case 2:
		//Ajouter un masseur / masseuse a notre personnel du jour
		break;
	case 3:
		//Retirer un masseur / masseuse a notre personnel du jour
		break;
	case 4:
		//Ajouter un client corporatif en file d'attente
		//AddClientCorpo();
		
		break;
	case 5:
		//Ajouter un client particulier en file d'attente
		break;
	case 6:
		//Retirer un client d’une file
		break;
	case 7:
		//Afficher l'etat du systeme
		break;
	case 8:
		//exit(0);//Quitter
		break;
	}
}