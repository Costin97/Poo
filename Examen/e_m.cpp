#include "e_m.hpp"
e_m::e_m(int n1,int m1){
	this->n=n1;
	this->m=m1;
	this->p= new int*[this->n];
	for(int i=0;i<this->n;i++){
		this->p[i]=new int[this->m];
	}
	int contor=1;
	for(int i=0;i<this->n;i++){
		for(int j=0;j<this->m;j++){
			this->p[i][j]=contor++;
		}
	}
}

int e_m::getValoare(int i,int j) const{
	return this->p[i][j];
}

e_m::e_m(const e_m& obj1){
	for(int i=0;i<this->n;i++){
		for(int j=0;j<this->m;j++){
			this->p[i][j]=obj1.getValoare(i,j);
		}
	}
}

int e_m::useVal(int n1,int m1,int val_pixel){
	this->p[n1][m1]=val_pixel;
}

ostream& operator<<(ostream& out,e_m& obj){
	for(int i=0;i<obj.n;i++){
		for(int j=0;j<obj.m;j++){
			out<<"["<<i<<"]["<<j<<"]="<<obj.getValoare(i,j)<<" ";
		}
		out<<endl;
	}
	return out;
}
e_m& e_m::operator=(const e_m& obj){
	this->n=obj.n;
	this->m=obj.m;
	if(this->p!=NULL){
		delete[]this->p;
	}
	this->p= new int*[this->n];
	for(int i=0;i<this->n;i++){
		this->p[i]=new int[this->m];
	}
	for(int i=0;i<obj.n;i++){
		for(int j=0;j<obj.m;j++){
			this->p[i][j]=obj.getValoare(i,j);
		}
	}
	return *this;
}
