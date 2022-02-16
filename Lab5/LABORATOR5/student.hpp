#include <iostream>
#include <cstring>

#include "clasa.cpp"
#include "diriginte.cpp"
#include "nota.cpp"

using namespace std;

class Student: public Clasa, public Diriginte,public Nota{
	char *nume;
		public:
		Student();
		Student(char*,int,char *,const char[],int*,int);
		Student(const Student&);
		
		friend ostream& operator<<(ostream&,const Student&);
		friend istream& operator>>(istream&,Student&);
		
		Student& operator=(const Student&);
		
		void studentInterschimbare(Student&);

		~Student();
};

