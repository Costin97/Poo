#include "Sticla.hpp"

Sticla::Sticla():Dop(){
	pret=0;
	marca=NULL;
	cout<<"Sticla:Constructorul fara parametrii. \n";
}

Sticla::Sticla(int pr,char *marca,int diametru,char *tip):Dop(diametru,tip){
	this->marca=new char[strlen(marca)+1];
	strcpy(this->marca,marca);
	this->pret=pr;
	cout<<"Sticla:Constructorul cu parametrii. \n";
}

Sticla::Sticla(const Sticla& obj):Dop(obj){
	if(this->marca!=NULL){
		delete[]this->marca;
	}
	this->marca=new char (strlen(obj.marca)+1);
	strcpy(this->marca,obj.marca);
	this->pret=obj.pret;
	cout<<"Sticla:Constructorul de copiere. \n";
}

Sticla& Sticla::operator=(const Sticla& obj){
	(Dop&)(*this)=obj;
	if(this->marca!=NULL){
		delete[]this->marca;
	}
	this->marca=new char(strlen(obj.marca)+1);
	strcpy(this->marca,obj.marca);
	this->pret=obj.pret;
	cout<<"Sticla:Operatorul = \n";
	return *this;
}

ostream& operator<<(ostream& out,Sticla& obj){
	out<<(Dop&)obj;
	cout<<"Pret: "<<obj.pret<<endl;
	cout<<"Marca: "<<obj.marca<<endl;
	return out;
}

istream& operator>>(istream& in,Sticla& obj){
	in>>(Dop&)obj;
	cout<<"Pret : ";
	in>>obj.pret;
	char copie[50];
	cout<<"Marca : ";
	in>>copie;
	if(obj.marca!=NULL){
		delete[]obj.marca;
	}
	obj.marca=new char(strlen(copie)+1);
	strcpy(obj.marca,copie);
	return in;
}

int Sticla::getPret(){
	return this->pret;
}

void Sticla::interschimbare(Sticla &obj1){
//	this->interschimbare((Dop&)obj);
	this->interschimb(obj1);
	Sticla copie;
//	copie=*this;
//	*this=obj1;
//	obj1=copie;
	copie.marca=new char[strlen(this->marca)+1];
	strcpy(copie.marca,this->marca);
	copie.pret=this->pret;
	if(this->marca!=NULL){
		delete[]this->marca;
	}
	this->marca=new char[strlen(obj1.marca)+1];
	strcpy(this->marca,obj1.marca);
	if(obj1.marca!=NULL){
		delete[]obj1.marca;
	}
	obj1.marca=new char[strlen(copie.marca)+1];
	strcpy(obj1.marca,copie.marca);
	this->pret=obj1.pret;
	obj1.pret=copie.pret;
}

Sticla::~Sticla(){
	delete[]this->marca;
	pret=0;
	cout<<"Sticla:Destructorul.\n";
}


