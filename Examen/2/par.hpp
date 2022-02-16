#ifndef PAR_HPP
#define PAR_HPP
#include "depozit.hpp"

class Par:public Depozit
{
	protected:
		float greutate; // greutate ambalaj gol
		float l, L, h; //lungime, latime, inaltime
	public:
		Par(float l=-1,float L=1,float h=1,float g=-1);
		float volum();
		float suprafata_baza();
		void afisare();
		~Par();
		float getG();

};

#endif
