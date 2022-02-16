#ifndef CONT_HPP
#define CONT_HPP
#include "depozit.hpp"

class Cont:public Depozit
{
	protected:
		float greutate; // greutate ambalaj gol
		float r, h; //raza, inaltime
	public:
		Cont(float g=-1,float r=-1,float h=-1);
		float volum();
		float suprafata_baza();
		void afisare();
		~Cont();
		float getG();
};

#endif
