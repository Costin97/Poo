#include "cub.hpp"

Cub::Cub(float g,float l){
	this->greutate=g;
	this->lat=l;
}

float Cub::volum(){
	float volumul=this->lat*this->lat*this->lat;
	return volumul;
}

float Cub::suprafata_baza(){
	float arie=6*this->lat*this->lat;
	return arie;
}

void Cub::afisare(){
	cout<<"Afisare dimensiuni+greutate cub:"<<endl;
	cout<<"Latura:"<<this->lat<<" greutate:"<<this->greutate<<endl;
}

float Cub::getG(){
	return this->greutate;
}
Cub::~Cub(){
	cout<<"Destructorul"<<endl;
}


