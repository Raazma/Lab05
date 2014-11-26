/////////////////////////////////////////////////////////////////////////////////////////////////
//ExposantRecursif.h
//fait par: frederic paquette
// fait le : 23 novembre 2014
//but:calcul recursivement la valeur d'un exposant
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
class ExposantRecursif
{
public:
	ExposantRecursif(double base,int exp);
	operator double() const;
private:
	int exposant_;
	double base_;

	double GetBase() const;
	int GetExp() const;
	double CalculRecursif(double base, int exp) const;
	
};

