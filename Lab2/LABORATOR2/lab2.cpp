#include <iostream>
#include <cstring>
using namespace std;

class Biblioteca{
	int an_construire;
	char adresa[20];
	char *nume;
	char *bibliotecar;
public:
	Biblioteca();
	Biblioteca(char[],char*,char*,int);
	Biblioteca(const Biblioteca&);
	~Biblioteca();
	
	void afisare()const;
	void modif(char*,char*,char [],int);
	
	char *getBibliotecar() const;
	char *getNume() const;
	
	friend int getAn(const Biblioteca&);
	friend void interschimbare(Biblioteca&,Biblioteca&);
};

Biblioteca::Biblioteca(){
	cout<<"Constructor fara parametrii\n";
	an_construire=0;
	strcpy(adresa,"---");
	nume=NULL;
	bibliotecar=NULL;
}

Biblioteca::Biblioteca(char a[],char *n,char *b,int an){
	cout<<"Constructor cu parametrii\n";
	an_construire=an;
	nume=new char[strlen(n)+1];
	strcpy(nume,n);
	bibliotecar=new char[strlen(b)+1];
	strcpy(bibliotecar,b);
	strcpy(adresa,a);
}

Biblioteca::Biblioteca(const Biblioteca &obj){
	cout<<"Constructor de copiere\n";
	nume=new char[strlen(obj.nume)+1];
	strcpy(nume,obj.nume);
	bibliotecar=new char[strlen(obj.bibliotecar)+1];
	strcpy(bibliotecar,obj.bibliotecar);
	strcpy(adresa,obj.adresa);
	an_construire=obj.an_construire;
}

Biblioteca::~Biblioteca(){
	cout<<"Destructor."<<nume<<endl;
	delete[]nume;
	delete[]bibliotecar;
}

void Biblioteca::afisare()const {
	cout<<"Nume:"<<nume<<endl;
	cout<<"Adresa:"<<adresa<<endl;
	cout<<"An construire:"<<an_construire<<endl;
	cout<<"Bibliotecar:"<<bibliotecar<<endl;
	cout<<"--------------------------\n";
}

void Biblioteca::modif(char *n,char *b,char a[],int an){
	if(nume!=NULL){
		delete[]nume;
	}
	nume=new char[strlen(n)+1];
	nume=strcpy(nume,n);
	if(bibliotecar!=NULL){
		delete[]bibliotecar;
	}
	bibliotecar=new char[strlen(b)+1];
	strcpy(bibliotecar,b);
	strcpy(adresa,a);
	an_construire=an;
}

char *Biblioteca::getBibliotecar() const{
	return bibliotecar;
}

char *Biblioteca::getNume() const{
	return nume;
}

int getAn(const Biblioteca &obj){
	return obj.an_construire;
}

void interschimbare(Biblioteca& obj1,Biblioteca& obj2){
	Biblioteca obj3(obj1);
	if(obj1.nume!=NULL){
		delete[]obj1.nume;
	}
	if(obj1.bibliotecar!=NULL){
		delete[]obj1.bibliotecar;
	}
	obj1.nume=new char[strlen(obj2.nume)+1];
	strcpy(obj1.nume,obj2.nume);
	obj1.bibliotecar=new char[strlen(obj2.bibliotecar)+1];
	strcpy(obj1.bibliotecar,obj2.bibliotecar);
	obj1.an_construire=obj2.an_construire;
	strcpy(obj1.adresa,obj2.adresa);
	if(obj2.nume!=NULL){
		delete[]obj2.nume;
	}
	if(obj2.bibliotecar!=NULL){
		delete[]obj2.bibliotecar;
	}
	obj2.nume=new char[strlen(obj3.nume)+1];
	strcpy(obj2.nume,obj3.nume);
	obj2.bibliotecar=new char[strlen(obj3.bibliotecar)+1];
	strcpy(obj2.bibliotecar,obj3.bibliotecar);
	obj2.an_construire=obj3.an_construire;
	strcpy(obj2.adresa,obj3.adresa);
}

int main(){
	//1
	Biblioteca obj2("Sos.Panduri","Biblioteca Orasului","Mihai",1987);
	Biblioteca obj3("Bulevardul Maniu","Biblioteca Militari","Ana",2001);
	Biblioteca obj1(obj3);
	cout<<"Afisarea obiectului ob2:"<<endl;
	obj2.afisare();
	cout<<endl;
	cout<<"Afisarea obiectului obj3"<<endl;
	obj3.afisare();
	cout<<endl;
	cout<<"Afisarea obiectului obj1 dupa ce am copiat continutul din obj3:"<<endl;
	obj1.afisare();
	cout<<endl;
	char *nume_bibliotecar=obj2.getBibliotecar();
	int an_construire_biblio=getAn(obj2);
	cout<<"Numele bibliotecarului din obj2 este:"<<nume_bibliotecar<<endl;
	cout<<"Anul de construire din obj2 este:"<<an_construire_biblio<<endl;
	//2
	Biblioteca *v;
	v=new Biblioteca[4];
	v[0].modif("Biblioteca Pantelimon","Adrian","Sos.Pantelimon",1990);
	v[1].modif("Biblioteca Iancului","Valentin","Sos.Iancului",1870);
	v[2].modif("Biblioteca Satului","George","Satu Mare",1889);
	v[3].modif("Biblioteca Valea-Rahovei","Mihai","Rahova",2000);
	//3
	cout<<endl<<"Afisarea vectorului inainte de sortare:"<<endl;
	for(int i=0;i<4;i++){
		v[i].afisare();
	}
	cout<<endl<<"--------------------------"<<endl;
	for(int i=0;i<4-1;i++)
		for(int j=i+1;j<4;j++){
		if(strcmp(v[i].getNume(),v[j].getNume())>0){
			interschimbare(v[i],v[j]);
		}
	}
	cout<<"Afisarea vectorului dupa sortare:"<<endl;
	for(int i=0;i<4;i++){
		v[i].afisare();
	}
	//4
	int min=getAn(v[0]);
	for(int i=0;i<4;i++){
		if(getAn(v[i])<min)
			min=getAn(v[i]);
	}
	cout<<"Cele mai vechi biblioteci sunt:"<<endl;
	for(int i=0;i<4;i++){
		if(getAn(v[i])==min)
			v[i].afisare();
	}
	//5
	delete[]v;
	delete[]nume_bibliotecar;
}

