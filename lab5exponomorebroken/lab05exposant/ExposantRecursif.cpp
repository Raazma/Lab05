/////////////////////////////////////////////////////////////////////////////////////////////////
//ExposantRecursif.cpp
//fait par: frederic paquette
// fait le : 23 novembre 2014
//but:calcul recursivement la valeur d'un exposant
////////////////////////////////////////////////////////////////////////////////////////////////////
#include "ExposantRecursif.h"


ExposantRecursif::ExposantRecursif(double base, int exp) :base_(base), exposant_(exp)
{
}

ExposantRecursif::operator double() const
{
	return CalculRecursif(GetBase(), GetExp());
	
}
double ExposantRecursif::GetBase() const
{
	return base_;
}
int ExposantRecursif::GetExp() const
{
	return exposant_;
}
double ExposantRecursif::CalculRecursif(double base, int exp) const
{
	if ( exp == 0)
		return 1;
	else if ( exp < 1)
		return 1 / base * CalculRecursif(base, exp + 1);
	else
		return base * CalculRecursif(base, exp - 1);

}