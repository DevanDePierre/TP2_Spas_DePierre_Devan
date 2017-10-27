// Déclaration de le la classe Menu
//
// par Devan de Pierre, 2017
//-----------------------------------------------------------------------------------------------
#pragma once
#include <iostream>
#include <cstdlib>
#include "FonctionsCommandes.h"
using namespace std;

class Menu
{
public:
	void AfficherMenu();
	void Commandes(int Choix);
	int ChoixCommande();


	const int MaxChoix = 8;
	const int MinChoix = 0;
private:
};