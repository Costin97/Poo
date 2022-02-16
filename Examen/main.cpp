#include "e_m.cpp"
#include "pixel.cpp"

using namespace std;

int main(){
	e_m a(3,3),b(5,5);
	cout<<"Afisare inainte de modificare:"<<endl<<a<<endl<<endl;
	int **p;
	p=new int*[3];

	for(int i=0;i<3;i++){
		p[i]=new int[3];
	}
	pixel v1(175),v2(123),v3(211),v4(203),v5(133),v6(153),v7(164),v8(129),v9(180);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			p[i][j]=v1.getVal();
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a.useVal(i,j,p[i][j]);
		}
	}
	b=a;
	cout<<"b:"<<endl<<b;
//		cout<<"Afisare dupa modificare:"<<endl<<a<<endl<<endl;


	return 0;
}
