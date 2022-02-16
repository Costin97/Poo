#include "cont.hpp"

Cont::Cont(float g,float r,float h){
	this->greutate=g;
	this->r=r;
	this->h=h;
}

float Cont::volum(){
	float volum=1/3*this->r*this->r*this->h*3.14;
	return volum;
}

float Cont::suprafata_baza(){
	float arie=this->r+3.14*(this->r+1);
	return arie;
}

void Cont::afisare(){
	cout<<"Afisare dimensiuni+greutate con:"<<endl;
	cout<<"Raza:"<<this->r<<" inaltime:"<<this->h<<" greutate:"<<this->greutate<<endl;
}

float Cont::getG(){
	return this->greutate;
}

Cont::~Cont(){
	cout<<"Destructorul"<<endl;
}


