#include "zombie.h"

zombie::zombie()
{
	nom = "Default";
    force = 5;
    pv = 50;
}

zombie::zombie(string n, int p, int f)
{
	if(p > 100 || f > 10)
	{

	}
	else
	{
		nom = n;
		pv = p;
		force = f;
	}

}

zombie::~zombie()
{
    cout<< nom << " est décédé."<< endl;
}

zombie::AttaqueZombie(zombie *cible)
{
    cible->setPv(cible->getPv() - getForce());
}

zombie::ShowInfos()
{
	cout << "Je m'appelle : " << getNom() << endl;
	cout << "Ma vitalité est de : " << getPv() << endl;
	cout << "Ma force est de : " << getForce() << endl;
}

//Pv

void zombie::setPv(int p)
{
	if (p > 100 || p < 0)
	{
		cerr << "Décomposition instantanée" << endl;
		pv = 0;
	}
	else
	{
		pv = p;
	}
}

int zombie::getPv() const
{
	return pv;
}

//Force

int zombie::getForce() const
{
	return force;
}

//Nom

string zombie::getNom() const
{
	return nom;
}

void zombie::setForce(int f)
{
	if (f < 0)
	{
		force = 0;
	}
	else
	{
		force = f;
	}
}

void zombie::setNom(string n)
{
	nom = n;
}
