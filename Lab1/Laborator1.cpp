#include <iostream>
#include <cstring>
using namespace std;

class Angajat{
	int varsta;
	int salariu;
	char nume[20];
	char CNP[14];

public:
	Angajat(){
		varsta=0;
		salariu=0;
		strcpy(nume,"");
		strcpy(CNP,"");
	}
	
	Angajat(int v,char n[],char C[],int s){
		varsta=v;
		strcpy(nume,n);
		strcpy(CNP,C);
		salariu=s;
	}
	void afisare(){
		cout<<"Varsta angajatului este: "<<varsta<<endl;
		cout<<"Salariul angajatului este: "<<salariu<<endl;
		cout<<"Numele angajatului este: "<<nume<<endl;
		cout<<"CNP: "<<CNP<<endl;
	}
	void modif(int v,char n[],char C[],int s){
		varsta=v;
		strcpy(nume,n);
		strcpy(CNP,C);
		salariu=s;
	}
	int getVarsta(){
		return varsta;
	}
	char *getNume(){
		return nume;
	}
	char *getCNP(){
		return CNP;
	}
	int getSalariu(){
		return salariu;
	}

};

int main() {
	//subptunctul a.
	Angajat obj1(18,"Costin","51234567891234",4000);
	Angajat obj2;
		
	int salariu=obj1.getSalariu();
	char *nume=obj1.getNume();
	
	cout<<"Afisarea pentru obj2,modificat:"<<endl;
	obj2.modif(21,"Ana","50332233228899",2000);
	obj2.afisare();
	
	cout<<endl<<"Afisarea pentru obj1: "<<endl;
	obj1.afisare();
	
	//subpunctul b.
	Angajat a[5];
	for(int i=0;i<5;i++){
		char nume[20];
		cout<<"Dati numele:"<<endl;
		cin>>nume;
		
		int varsta;
		cout<<"Dati varsta:"<<endl;
		cin>>varsta;
		
		char CNP[14];
		cout<<"Dati CNP:"<<endl;
		cin>>CNP;
		
		int salariu;
		cout<<"Dati salariu:"<<endl;
		cin>>salariu;
		
		a[i].modif(varsta,nume,CNP,salariu);
	}
	
	//subpunctul c
	for(int i=0;i<5-1;i++)
		for(int j=i+1;j<5;j++){
			if(strcmp(a[i].getNume(),a[j].getNume())>0){
				Angajat v;
//				v.modif(a[i].getVarsta(),a[i].getNume(),a[i].getCNP(),a[i].getSalariu());
//				a[i].modif(a[j].getVarsta(),a[j].getNume(),a[j].getCNP(),a[j].getSalariu());
//				a[j].modif(v.getVarsta(),v.getNume(),v.getCNP(),v.getSalariu());
				v=a[i];
				a[i]=a[j];
				a[j]=v;
			}
		}
	cout<<"Afisarea numelor dupa sortarea alfabetica!"<<endl;
		for(int i=0;i<5;i++){
			a[i].afisare();
		}
	//subpunctul d
	int max=-1;
	for(int i=0;i<5;i++){
		if(a[i].getSalariu()>max){
			max=a[i].getSalariu();
		}
	}
	
	for(int i=0;i<5;i++){
		if(a[i].getSalariu()==max){
			cout<<a[i].getNume()<<" are salariul maxim: "<<a[i].getSalariu()<<endl;
		}
	}
	
	return 0;
}
