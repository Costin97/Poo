#include "Sticla.cpp"


int main(){
	Sticla obj(100,"Dorna",10,"Plastic");
	Sticla copie;
	copie=obj;
	cout<<"Afisare obiect obj:\n"<<obj;
	cout<<endl;
	cout<<"Afisare obiect copie dupa copiere:\n"<<copie<<endl;
	Sticla *v;
	v=new Sticla[5];
	cout<<"Urmeaza citirea \n";
	for(int i=0;i<2;i++){
		cin>>v[i];
	}
	cout<<endl<<endl;
	for(int i=0;i<2-1;i++)
		for(int j=i+1;j<2;j++){
		if(v[i].getPret()>v[j].getPret())
			v[i].interschimbare(v[j]);
	}
	cout<<"Urmeaza afisarea \n";
	for(int i=0;i<2;i++){
		cout<<v[i];
	}
	cout<<endl<<"-------------------"<<endl;
	for(int i=0;i<2;i++){
		if(v[i].getDiametru()>5)
		cout<<"Elementul are diamentrul dopului > 5 :\n "<<v[i]<<endl;
	}
	return 0;
}
