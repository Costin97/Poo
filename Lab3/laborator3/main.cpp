#include "fractie.cpp"

int main() {
	Fractie f1(2,4),f2(6,3),f3(8,7),f4;
	
	cout<<"Numaratorul din fractia f1 este:"<<f1.getA()<<endl;
	cout<<"Numitorul din fractia f1 este:"<<f1.getB()<<endl;
	cout<<"Raportul dintre "<<f1.getA()<<" si "<<f1.getB()<<" este:"<<f1.getValoare()<<endl;
	
	Fractie inv=f1.getInv();
	cout<<"Inversul fractiei 1 este: a-> "<<inv.getA()<<" b-> "<<inv.getB()<<endl;
	
	
	f1.setData(11,4);
	cout<<"Fractia f1 arata dupa modificarea datelor arata asa: Numaratorul -> "<<f1.getA()<<" Numitorul -> "<<f1.getB()<<endl;
	//Am facut intentionat aceasta impartire la 0 sa pot vedea si eroarea afisata.
	cout<<"Afisarea lui f4 inainte de copierea lui f1: "<<f4.getValoare()<<endl;
	f4=f1;
	cout<<"Afisarea lui f4 dupa copierea lui f1: "<<f4.getValoare()<<endl;
	
	Fractie suma,diferenta,produs,raport;
	suma=f2+f3;
	cout<<"Dupa folosirea operatorului + intre f2 si f3 avem: a-> "<<suma.getA()<<" b-> "<<suma.getB()<<endl;
	diferenta=f2-f3;
	cout<<"Dupa folosirea operatorului - intre f2 si f3 avem: a-> "<<diferenta.getA()<<" b-> "<<diferenta.getB()<<endl;
	produs=f2*f3;
	cout<<"Dupa folosirea operatorului * intre f2 si f3 avem: a-> "<<produs.getA()<<" b-> "<<produs.getB()<<endl;	
	raport=f2/f3;
	cout<<"Dupa folosirea operatorului / intre f2 si f3 avem: a-> "<<raport.getA()<<" b-> "<<raport.getB()<<endl;

	suma+=f1;
	cout<<"Afisare suma dupa ce am folosit intre suma si f1 +=: a-> "<<suma.getA()<<" b-> "<<suma.getB()<<endl;
	diferenta-=f1;
	cout<<"Afisare diferenta dupa ce am folosit intre diferenta si f1 -=: a-> "<<diferenta.getA()<<" b-> "<<diferenta.getB()<<endl;
	produs*=f1;
	cout<<"Afisare produs dupa ce am folosit intre produs si f1 *=: a-> "<<produs.getA()<<" b-> "<<produs.getB()<<endl;
	raport/=f1;
	cout<<"Afisare raport dupa ce am folosit intre raport si f1 /=: a->"<<raport.getA()<<" b-> "<<raport.getB()<<endl;
	cout<<"Afisarea lui f3 inainte sa i se aplice inversul "<<f3.getValoare()<<endl;
	f3=-f3;
	cout<<"Afisarea lui f3 dupa ce i s-a aplicat opusul "<<f3.getValoare()<<endl;
//	cout<<"f2:"<<f2.getValoare()<<endl;
//	cout<<"f1:"<<f1.getValoare()<<endl;
	
	cout<<"Operatorul boolean == intre f1 si f2 "<<(f1==f2)<<endl;
	cout<<"Operatorul boolean != intre f1 si f "<<(f1!=f2)<<endl;
	cout<<"Operatorul boolean < intre f1 si f "<<(f1<f2)<<endl;
	cout<<"Operatorul boolean > intre f1 si f "<<(f1>f2)<<endl;
	cout<<"Operatorul boolean <= intre f1 si f "<<(f1<=f2)<<endl;
	cout<<"Operatorul boolean >= intre f1 si f "<<(f1>=f2)<<endl;
	
	return 0;
}
