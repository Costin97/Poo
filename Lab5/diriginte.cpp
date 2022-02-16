#include "diriginte.hpp"

Diriginte::Diriginte(){
	nume=NULL;
	strcpy(grupa,"");
//	cout<<"Diriginte:Constructor fara parametrii\n";
}

Diriginte::Diriginte(char *n,const char g[]){
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nume=new char(strlen(n)+1);
	strcpy(this->nume,n);
	strcpy(this->grupa,g);
//	cout<<"Diriginte:Constructor cu parametrii\n";
}

Diriginte::Diriginte(const Diriginte &obj){
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nume=new char(strlen(obj.nume)+1);
	strcpy(this->nume,obj.nume);
	strcpy(this->grupa,obj.grupa);
//	cout<<"Diriginte:Constructor de copiere\n";
}

ostream& operator<<(ostream& out,const Diriginte &obj){
	out<<"Nume Diriginte:"<<obj.nume<<endl;
	out<<"Grupa:"<<obj.grupa<<endl;
	return out;
}

istream& operator>>(istream& in,Diriginte &obj){
	cout<<"Nume Diriginte:";
	char n[20],g[7];
	in>>n;
	if(obj.nume!=NULL){
		delete[]obj.nume;
	}
	obj.nume=new char(strlen(n)+1);
	strcpy(obj.nume,n);
	cout<<"Grupa:";
	in>>g;
	strcpy(obj.grupa,g);
	return in;
}

char* Diriginte::getNumeD(){
	return this->nume;
}

void Diriginte::diriginteInterschimbare(Diriginte& obj){
	char *copie,g[7];
	copie=new char(strlen(this->nume)+1);
	strcpy(g,this->grupa);
	strcpy(copie,this->nume);
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nume=new char(strlen(obj.nume)+1);
	strcpy(this->nume,obj.nume);
	strcpy(this->grupa,obj.grupa);
	if(obj.nume!=NULL){
		delete[]obj.nume;
	}	
	obj.nume=new char(strlen(copie)+1);
	strcpy(obj.nume,copie);
	strcpy(obj.grupa,g);
}

void Diriginte::setName(const char *n){
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nume=new char(strlen(n)+1);
	strcpy(this->nume,n);
}

Diriginte& Diriginte::operator=(const Diriginte& obj){
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	strcpy(this->grupa,obj.grupa);
	return *this;
}

Diriginte::~Diriginte(){
	delete[]this->nume;
	cout<<"Diriginte:Destructor\n";
}
