#ifndef ZOMBIE_H
#endif//ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class zombie
{
	private:

	public:

	//VARIABLES
	string nom;
	int pv;
	int force;

	//CONSTRUCTEURS
	zombie();
	zombie(string n, int p, int f);

	//DESTRUCTEURS
	~zombie();

	//FONCTIONS
	AttaqueZombie(zombie *cible);
	ShowInfos();

	//GETTER/SETTER Nom
	string getNom() const;
	void setNom(string n);

	//GETTER/SETTER Pv
	int getPv() const;
	void setPv(int p);

	//GETTER/SETTER Force
	int getForce() const;
	void setForce(int f);

};

#endif // ZOMBIE_H
