#include "clasa.hpp"

Clasa::Clasa(){
	nr_elevi=-1;
//	cout<<"Clasa:Constructor fara parametrii\n";
}

Clasa::Clasa(int n){
	this->nr_elevi=n;
//	cout<<"Clasa:Constructor cu parametrii\n";
}

Clasa::Clasa(const Clasa &obj){
	this->nr_elevi=obj.nr_elevi;
//	cout<<"Clasa:Constructor de copiere\n";
}

ostream& operator<<(ostream& out,const Clasa& obj){
	out<<"Numar elevi:"<<obj.nr_elevi<<endl;
	return out;
}

istream& operator>>(istream& in,Clasa &obj){
	cout<<"Numar elevi:";
	int n;
	in>>n;
	obj.nr_elevi=n;
	return in;
}

int Clasa::getNrElevi(){
	return this->nr_elevi;
}

void Clasa::clasaInterschimbare(Clasa& obj){
	int copie;
	copie=this->nr_elevi;
	this->nr_elevi=obj.nr_elevi;
	obj.nr_elevi=copie;
}

Clasa& Clasa::operator=(const Clasa& obj){
	this->nr_elevi=obj.nr_elevi;
	return *this;
}

Clasa::~Clasa(){
	nr_elevi=-1;
	//nenecesar.
	cout<<"Clasa:Destructor\n";
}
