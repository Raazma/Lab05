/////////////////////////////////////////////////////////////////////////////////////////////////
//ExposantIterratif.cpp
//fait par: frederic paquette
// fait le : 23 novembre 2014
//but:calcul Itterativement la valeur d'un exposant
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ExposantItteratif.h"

ExposantItteratif::ExposantItteratif(double base, int exp) :base_(base), exposant_(exp)
{
}

ExposantItteratif::operator double() const
{
	return CalculExpItteratif(GetBase(), GetExp());
}

int ExposantItteratif::GetExp() const
{
	return exposant_;
}
double ExposantItteratif::GetBase() const
{
	return base_;
}
double  ExposantItteratif::CalculExpItteratif(double base, int exp) const
{
	double valeur = 1;

	if (exp < 0)
	{
		for (size_t i = 0; i < exp * -1; i++)
		{
			valeur *=  1 / base;
		}
	}
	else
	{
		for (size_t i = 0; i < exp; i++)
		{
			valeur *=  base;
		}
	}
	return valeur;
}
