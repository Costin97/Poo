#ifndef DEPOZIT_HPP
#define DEPOZIT_HPP

#include <iostream>
using namespace std;

class Depozit{
	public:
//	virtual ~Baza()=0;
	virtual void afisare()=0;
	virtual float suprafata_baza()=0;
	virtual float getG()=0;
};

#endif
