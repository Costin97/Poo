#ifndef CUB_HPP
#define CUB_HPP
#include "depozit.hpp"

class Cub:public Depozit
{
	protected:
		float greutate; // greutate ambalaj gol
		float lat; //latura
	public:
		Cub(float g=-1,float l=-1);
		float volum();
		float suprafata_baza();
		void afisare();
		float getG();
		~Cub();
};

#endif
