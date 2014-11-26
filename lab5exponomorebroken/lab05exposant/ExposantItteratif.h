/////////////////////////////////////////////////////////////////////////////////////////////////
//ExposantIterratif.h
//fait par: frederic paquette
// fait le : 23 novembre 2014
//but:calcul Iterativement la valeur d'un exposant
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#pragma warning(disable:4018)

class ExposantItteratif
{
public:
	ExposantItteratif(double base,int exp);

operator double() const;
private:
	int exposant_;
	double base_;

	int GetExp() const;
	double GetBase()const;
	double CalculExpItteratif(double base, int exp) const;
};

