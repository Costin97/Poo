#include <iostream>
#include <cstring>
using namespace std;

class Clasa{
	protected:
		int nr_elevi;
	public:
		Clasa();
		Clasa(int);
		Clasa(const Clasa&);
		
		friend ostream& operator<<(ostream&,const Clasa&);
		friend istream& operator>>(istream&,Clasa&);
		Clasa& operator=(const Clasa&);
		
		int getNrElevi();
		void clasaInterschimbare(Clasa&);
		
		~Clasa();
};


