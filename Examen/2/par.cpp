#include "par.hpp"

Par::Par(float latime,float lungime,float inaltime,float g){
	this->l=latime;
	this->L=lungime;
	this->h=inaltime;
	this->greutate=g;
}

float Par::volum(){
	float v=this->L*this->L*this->h;
	return v;
}

float Par::suprafata_baza(){
	float a=2*(this->l*this->L+this->L*this->h+this->l*this->h);
	return a;
}
void Par::afisare(){
	cout<<"Afisare dimensiuni paralelipiped dreptunghic:"<<endl;
	cout<<"Latime:"<<this->l<<" lungime:"<<this->L<<" inaltime:"<<this->h<<" greutate:"<<this->greutate<<endl;
}

float Par::getG(){
	return this->greutate;
}

Par::~Par(){
	cout<<"Destructorul"<<endl;
}
