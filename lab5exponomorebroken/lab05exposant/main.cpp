////////////////////////////////////////////////////////////////////////////////////////////////
//main.cpp
//fait par: frederic paquette
//le 23 novembre 2014
//but: demande une base et un exposant  l'utilisateur temp et aussi longtemp que l'utilisateur n'a 
// pas rentrer 0 et 0
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include "ExposantItteratif.h"
#include "ExposantRecursif.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int base, exposant;
	bool fin = false;

	while (!fin)
	{
	   cout << "Donnez la base: ";
	   cin >> base;
	   cout << "Donnez l'exposant ";
	   cin >> exposant;
	   cout << endl << endl;
	 
	   if (base != 0 || exposant != 0)
	   {
		   cout << "Reponse Iterative: " << ExposantItteratif(base, exposant) << endl;
		   cout << "Reponse Recursive: " << ExposantRecursif(base, exposant) << endl;
		   cout << string(15, '-') << " 0 a la 0 pour mettre fin au programme " << string(15, '-')<< endl;
	   }
	   else
		   fin = true;
	}
}