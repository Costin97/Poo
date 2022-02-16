#include <iostream>
#include <cstring>
using namespace std;

class Nota{
	protected:
		int *note;
		int nr_note;
	public:
		Nota();
		Nota(int *,int);
		Nota(const Nota&);
		
		friend istream& operator>>(istream&,Nota&);
		friend ostream& operator<<(ostream&,const Nota&);
		
		Nota& operator=(const Nota&);
		
		float getMedie();
		void notaInterschimbare(Nota&);
		
		~Nota();
};






