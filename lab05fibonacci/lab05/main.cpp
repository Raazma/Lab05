///////////////////////////////////////////////////////////////////////////////////////////////////
//main.cpp
//fait par:frederic paquette
//fair le 23 novembre 2014
//but: calculer itterativement et recursivement la suite de fibonacci
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include<string>
using namespace std;

long CalculerFibonacciIterative(int mois);
long CalculerFibonacciRecursif(int mois);


int main()
{
	int mois;

	cout << "Enter un mois et fibonacci vous donnera une reponse magique! : ";
	cin >> mois;
	try
	{
		cout << "Iterratif: "<< CalculerFibonacciIterative(mois) << endl;
		cout << "Recursif: "<< CalculerFibonacciRecursif(mois) << endl;;
		cout << string(70, '-') << endl;
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}
}

long CalculerFibonacciRecursif(int mois)
{
	if (mois < 0)
		throw exception("Mois invalide");

  if (mois == 0)
     return 0;

   if (mois == 1)
      return 1 ;

   return CalculerFibonacciRecursif(mois - 1) + CalculerFibonacciRecursif(mois - 2);
}

long CalculerFibonacciIterative(int mois)
{

   int couple = 1;
   int lapinMajeur = 0;
   int t ;

   if (mois < 0)
	   throw exception("Mois invalide");

   for (size_t i = 0 ; i < mois - 1 ; i++)
   {
      
      t = couple;
      couple += lapinMajeur;
      lapinMajeur = t;
   }

   return couple;
}
   