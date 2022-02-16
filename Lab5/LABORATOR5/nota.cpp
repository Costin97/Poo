#include "nota.hpp"

Nota::Nota(){
	note=NULL;
	nr_note=-1;
}

Nota::Nota(int *n,int nr){
	if(this->note!=NULL){
		delete[]this->note;
	}
	this->note=new int(nr);
	for(int i=0;i<nr;i++){
		this->note[i]=n[i];
	}
	this->nr_note=nr;
}

Nota::Nota(const Nota& obj){
	if(this->note!=NULL){
		delete[]this->note;
	}
	this->note=new int(obj.nr_note);
	for(int i=0;i<obj.nr_note;i++){
		this->note[i]=obj.note[i];
	}
	this->nr_note=obj.nr_note;
}	

istream& operator>>(istream& in,Nota& obj){
	cout<<"Numar note:";
	in>>obj.nr_note;
	cout<<"Note:";
	if(obj.note!=NULL){
		delete[]obj.note;
	}
	obj.note=new int(obj.nr_note);
	for(int i=0;i<obj.nr_note;i++){
		in>>obj.note[i];
	}
	return in;
}

ostream& operator<<(ostream& out,const Nota& obj){
	out<<"Numar note:"<<obj.nr_note<<endl;
	out<<"Note:";
	for(int i=0;i<obj.nr_note;i++){
		out<<obj.note[i]<<" ";
	}
	cout<<endl;
	return out;
}

float Nota::getMedie()
{
	int suma=0;
	float medie;
	for(int i=0;i<this->nr_note;i++){
		suma+=this->note[i];
	}
	medie=(float)suma/this->nr_note;
	return medie;
}

Nota& Nota::operator=(const Nota& obj){
	if(this->note!=NULL){
		delete[]this->note;
	}
	this->nr_note=obj.nr_note;
	this->note=new int[obj.nr_note];
	for(int i=0;i<obj.nr_note;i++){
		this->note[i]=obj.note[i];
	}
	return *this;
}

void Nota::notaInterschimbare(Nota& obj){
	int*v,nr;
	nr=this->nr_note;
	v=new int(nr);
	for(int i=0;i<nr;i++){
		v[i]=this->note[i];
	}
	if(this->note!=NULL){
		delete[]this->note;
	}
	this->note=new int(obj.nr_note);
	for(int i=0;i<obj.nr_note;i++){
		this->note[i]=obj.note[i];
	}
	if(obj.note!=NULL){
		delete[]obj.note;
	}
	obj.note=new int(nr);
	for(int i=0;i<nr;i++){
		obj.note[i]=v[i];
	}
}
Nota::~Nota(){
	delete[]this->note;
}
