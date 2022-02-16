#include "Dop.hpp"

Dop::Dop(){
	diametru=0;
	tip=NULL;
	cout<<"Dop:Constructorul fara parametrii.\n";
}

Dop::Dop(int d,const char *t){
	this->tip=new char[strlen(t)+1];
	strcpy(this->tip,t);
	this->diametru=d;
	cout<<"Dop:Constructorul cu parametrii.\n";
}

Dop::Dop(const Dop& obj){
	if(tip!=NULL){
		delete[]tip;
	}
	this->tip=new char(strlen(obj.tip)+1);
	strcpy(this->tip,obj.tip);
	diametru=obj.diametru;
	cout<<"Dop:Constructorul de copiere.\n";
}

Dop& Dop::operator=(const Dop& obj){
	if(tip!=NULL){
		delete[]tip;
	}
	this->tip=new char(strlen(obj.tip)+1);
	strcpy(this->tip,obj.tip);
	this->diametru=obj.diametru;
	return *this;
	cout<<"Dop:Operatorul = \n";
}

Dop::~Dop(){
	delete[]tip;
	diametru=0;
	cout<<"Dop:Destructorul \n";
}

void Dop::interschimb(Dop& obj1){
	Dop copie;
	copie=*this;
	*this=obj1;
	obj1=copie;
	cout<<"THIS:"<<*this<<endl;
	cout<<"OBJ1:"<<obj1<<endl;
}

int Dop::getDiametru(){
	return this->diametru;
}

ostream& operator<<(ostream& out,Dop& obj){
	cout<<"Diametru: "<<obj.diametru<<endl;
	cout<<"Tip: "<<obj.tip<<endl;
}

istream& operator>>(istream& in,Dop& obj){
	cout<<"Diametru : ";
	in>>obj.diametru;
	char copie[50];
	cout<<"Tip : ";
	in>>copie;
	if(obj.tip!=NULL){
		delete[]obj.tip;
	}
	obj.tip=new char(strlen(copie)+1);
	strcpy(obj.tip,copie);
	return in;
}
