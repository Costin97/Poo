#include "student.hpp"

Student::Student():Clasa(),Diriginte(),Nota(){
	nume=NULL;
//	cout<<"Student:Constructor fara parametrii\n";
}

Student::Student(char *n1,int nr,char *n2,const char g[],int *v,int numar):Clasa(nr),Diriginte(n2,g),Nota(v,numar){
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nume=new char(strlen(n1)+1);
	strcpy(this->nume,n1);
//	cout<<"Student:Constructor cu parametrii\n";
}

Student::Student(const Student &obj):Clasa(obj),Diriginte(obj),Nota(obj){
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nume=new char(strlen(obj.nume)+1);
	strcpy(this->nume,obj.nume);
//	cout<<"Student:Constructor de copiere\n";
}

ostream& operator<<(ostream& out,const Student& obj){
	out<<(Clasa&)obj;
	out<<(Diriginte&)obj;
	out<<(Nota&)obj;
	out<<"Nume Student:"<<obj.nume<<endl;
	return out;
}

istream& operator>>(istream& in,Student& obj){
	in>>(Clasa&)obj;
	in>>(Diriginte&)obj;
	in>>(Nota&)obj;
	cout<<"Nume Student:";
	char nume[20];
	in>>nume;
	if(obj.nume!=NULL){
		delete[]obj.nume;
	}
	obj.nume=new char(strlen(nume)+1);
	strcpy(obj.nume,nume);
}

Student& Student::operator=(const Student& obj){
	(Clasa&)(*this)=obj;
	(Diriginte&)(*this)=obj;
	(Nota&)(*this)=obj;
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	return *this;
}


void Student::studentInterschimbare(Student& obj){
	this->clasaInterschimbare(obj);
	this->diriginteInterschimbare(obj);
	this->notaInterschimbare(obj);
	char nume[20];
	strcpy(nume,this->nume);
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nume=new char(strlen(obj.nume)+1);
	strcpy(this->nume,obj.nume);
	if(obj.nume!=NULL){
		delete[]obj.nume;
	}
	obj.nume=new char(strlen(nume)+1);
	strcpy(obj.nume,nume);
}

Student::~Student(){
	delete[]this->nume;
}
