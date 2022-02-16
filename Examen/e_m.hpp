#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class e_m{
	
	int **p;
	int n;
	int m;

	public:
		e_m (int n1=0,int m1=0);
		e_m(const e_m& obj1);
		int getValoare(int,int) const;
		int useVal(int,int,int);
		friend ostream& operator<<(ostream&,e_m&);
		e_m& operator=(const e_m&);
};
