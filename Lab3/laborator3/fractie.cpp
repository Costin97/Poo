#include "fractie.hpp"

Fractie::Fractie(int aa,int bb){
	a=aa;
	b=bb;
}

Fractie::Fractie(const Fractie &obj){
//	cout<<"Constructorul de copiere\n";
	this->a=obj.a;
	this->b=obj.b;
}

Fractie& Fractie::operator=(const Fractie& obj){
	this->a=obj.a;
	this->b=obj.b;
	
	return *this;
}

Fractie::~Fractie(){
//	cout<<"Destructorul\n";
	a=0;
	b=0;
}

double Fractie::getValoare() const{
	double rezultat;
	if(b!=0){
		rezultat=a/(double)b;
		return rezultat;
	}
	else{
		cout<<"Nu se poate face impartirea lui a la b,b=0!\n";
		return 0;
	}
}

Fractie Fractie::getInv() const{
//	cout<<"Inversarea\n";
	Fractie inv;
	inv.b=this->a;
	inv.a=this->b;
	return inv;
}

void Fractie::setData(int aa,int bb){
	this->a=aa;
	this->b=bb;
}

float Fractie::getA(){
	return this->a;
}

float Fractie::getB()
{
	return this->b;
}

Fractie operator+(const Fractie &obj1,const Fractie &obj2){
	Fractie rezultat;
	rezultat.a=obj1.a*obj2.b+obj2.a*obj1.b;
	rezultat.b=obj1.b*obj2.b;
	return rezultat;
}

Fractie operator-(const Fractie &obj1,const Fractie &obj2){
	Fractie rezultat;
	rezultat.a=obj1.a*obj2.b-obj2.a*obj1.b;
	rezultat.b=obj1.b*obj2.b;
	return rezultat;
}

Fractie operator*(const Fractie &obj1,const Fractie &obj2){
	Fractie rezultat;
	rezultat.a=obj1.a*obj2.a;
	rezultat.b=obj1.b*obj2.b;
	return rezultat;
}

Fractie operator/(const Fractie &obj1,const Fractie &obj2){
	Fractie rezultat;
	rezultat=obj1*obj2.getInv();
	return rezultat;
}

Fractie operator-(const Fractie &obj1){
	Fractie rezultat;
	rezultat.a=obj1.a*(-1);
	rezultat.b=obj1.b;
	return rezultat;
}

Fractie& Fractie::operator+=(const Fractie& obj1){
	
	*this=*this+obj1;
	return *this;
}

Fractie& Fractie::operator-=(const Fractie& obj1){
	
	*this=*this-obj1;
	return *this;
}

Fractie& Fractie::operator*=(const Fractie& obj1){
	
	*this=*this*obj1;
	return *this;
}

Fractie& Fractie::operator/=(const Fractie& obj1){
	
	*this=*this/obj1;
	return *this;
}

bool Fractie::operator==(const Fractie &obj1){
	if((this->a==obj1.a)&&(this->b==obj1.b)){
		return true;
	}
	return false;
}

bool Fractie::operator!=(const Fractie &obj1){
	if((this->a!=obj1.a)&&(this->b!=obj1.b)){
		return true;
	}
	return false;
}

bool Fractie::operator<(const Fractie &obj1){
	if(this->getValoare()<obj1.getValoare()){
		return true;
	}
	return false;
}

bool Fractie::operator<=(const Fractie &obj1){
	if((this->getValoare()<=obj1.getValoare())){
		return true;
	}
	return false;
}

bool Fractie::operator>(const Fractie &obj1){
	if((this->getValoare()>obj1.getValoare())){
		return true;
	}
	return false;
}

bool Fractie::operator>=(const Fractie &obj1){
	if((this->getValoare()>=obj1.getValoare())){
		return true;
	}
	return false;
}

