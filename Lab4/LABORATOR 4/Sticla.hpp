#include <iostream>
#include <cstring>
#include "Dop.cpp"

using namespace std;

class Sticla : public Dop{
	int pret;
	char *marca;
	
	public:
		Sticla();
		Sticla(int,char *,int,char *);
		Sticla(const Sticla&);
		Sticla& operator=(const Sticla&);
		
		int getPret();
		void interschimbare(Sticla&);
		
		friend istream& operator>>(istream&,Sticla&);
		friend ostream& operator<<(ostream&,Sticla&);
				
		~Sticla();

};


