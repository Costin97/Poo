#include "cub.cpp"
#include "par.cpp"
#include "cont.cpp"

int main(){
	Depozit**v;
	v=new Depozit*[3];
	v[0]=new Cub(100,15);
	v[1]=new Par(10,20,5,90);
	v[2]=new Cont(85,5,20);
	for(int i=0;i<3;i++){
		v[i]->afisare();
	}

	float suprafata_totala=v[0]->suprafata_baza()+v[1]->suprafata_baza()+v[2]->suprafata_baza();
	cout<<"Suprafata totala este:"<<suprafata_totala<<endl;
	float greutate=0.0;
	int contor=-1;
	for(int i=0;i<3;i++){
		if(v[i]->getG()>greutate){
			greutate=v[i]->getG();
		}
		contor=i;
	}
	cout<<"Greutatea este: "<<greutate<<endl;
		for(int i=0;i<3;i++){
		delete v[i];
	}
	delete[]v;
	return 0;
}
