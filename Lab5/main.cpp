#include "student.cpp"
#include <vector>

int main(){
	Student *v;
	int nr_studenti;
	cout<<"Dati numarul de studenti:";
	cin>>nr_studenti;
	v=new Student[nr_studenti];
	for(int i=0;i<nr_studenti;i++){
		cin>>v[i];
		cout<<"Media "<<i<<" "<<v[i].getMedie()<<endl;
	}
	cout<<"Afisare inainte de sortare dupa medie:"<<endl;
	for(int i=0;i<nr_studenti;i++){
		cout<<v[i]<<endl;
	}
	cout<<"-----------------------------------"<<endl;
	for(int i=0;i<nr_studenti-1;i++)
		for(int j=i+1;j<nr_studenti;j++){
		if(v[i].getMedie()>v[j].getMedie()){
			v[i].studentInterschimbare(v[j]);
		}
	}
	cout<<"Afisare dupa sortarea dupa medie:"<<endl;
	for(int i=0;i<nr_studenti;i++){
		cout<<v[i]<<endl;
	}
	char numeD[15];
	cout<<"Dati numele dirigintelui:";
	cin>>numeD;
	cout<<"Afisarea numelui dirigintelui de la prima grupa,inainte de modificare:"<<v[0].getNumeD()<<endl;
	v[0].setName(numeD);
	cout<<"Afisarea numelui dirigintelui de la prima grupa,dupa modificare:"<<v[0].getNumeD()<<endl;
	cout<<"-----------------------------------"<<endl;
	int x;
    cout<<"Dati pozitia x:";
    cin>>x;
    cout<<endl;
    Student nou;
    cout<<"Citiera datelor pentru noul student:\n";
    cin>>nou;
    cout<<"Numar studenti pana la nodificare:"<<nr_studenti<<endl;
    nr_studenti++;
    cout<<"Numar studenti dupa modificare:"<<nr_studenti<<endl;
    Student *copie;
    copie=new Student[nr_studenti-1];

    for(int i=0;i<nr_studenti-1;i++){
        copie[i]=v[i];
    }
	delete[]v;
	Student *a=new Student[nr_studenti];
	for(int i=0;i<nr_studenti-1;i++){
		a[i]=copie[i];
	}
	delete[]copie;

	
	if(x==nr_studenti-1){
		a[x]=nou;
	}else if(x==0){
		for(int j=nr_studenti-1;j>=1;j--){
			a[j]=a[j-1];
		}
		a[x]=nou;
}
	if(x!=0&&x!=nr_studenti-1){
		for(int j=nr_studenti-1;j>x;j--){
			a[j]=a[j-1];
		}
		a[x]=nou;
	}
	cout<<"Afisare dupa adaugarea in vector anoului elev:";
		for(int i=0;i<nr_studenti;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
