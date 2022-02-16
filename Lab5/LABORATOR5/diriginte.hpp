#include <iostream>
#include <cstring>
using namespace std;

class Diriginte{
	protected:
		char *nume;
		char grupa[7];
	public:
		Diriginte();
		Diriginte(char *,const char []);
		Diriginte(const Diriginte&);
		
		friend ostream& operator<<(ostream&,const Diriginte&);
		friend istream& operator>>(istream&,Diriginte&);
		
		Diriginte& operator=(const Diriginte&);
		
		char *getNumeD();
		void diriginteInterschimbare(Diriginte&);
		void setName(const char*);
		
		~Diriginte();
};

