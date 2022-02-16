#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Fractie{
	private:
		int a;
		int b;
		
		public:
			
			Fractie(int aa=0,int bb=0);
			Fractie (const Fractie&);
			Fractie & operator=(const Fractie&);
			~Fractie();
			
			double getValoare() const;
			Fractie getInv() const;
			void setData(int,int);
			float getA();
			float getB();
			
			friend Fractie operator+(const Fractie&,const Fractie&);
			friend Fractie operator -(const Fractie&,const Fractie&);
			friend Fractie operator *(const Fractie&,const Fractie&);
			friend Fractie operator /(const Fractie&,const Fractie&);
			friend Fractie operator -(const Fractie&);
			
			Fractie& operator +=(const Fractie &);
			Fractie& operator -=(const Fractie &);
			Fractie& operator *=(const Fractie &);
			Fractie& operator /=(const Fractie &);
			
			bool operator ==(const Fractie&);
			bool operator !=(const Fractie&);
			bool operator <(const Fractie&);
			bool operator >=(const Fractie&);
			bool operator >(const Fractie&);
			bool operator <=(const Fractie&);

};
