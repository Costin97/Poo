#include <iostream>
#include <cstring>
using namespace std;

class Dop{
	protected:
		int diametru;
		char *tip;
	
	public:
		Dop ();
		Dop (int,const char *);
		Dop (const Dop&);
		Dop& operator=(const Dop&);
		~Dop();
		
		void interschimb(Dop&);
		int getDiametru();
		
		friend istream& operator>>(istream&,Dop&);
		friend ostream& operator<<(ostream&,Dop&);
};



