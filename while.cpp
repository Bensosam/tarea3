#include <iostream>
using namespace std;
main(){
/*	
	int i=0;
	while(i<5){
		cout<<i<<endl;
		i++;
		
		
	}*/
	
	char respuesta;
	
	do{
		cout<<"desea ingresar otro valor? (s/n) ";
		cin>>respuesta;
		
		
	}
	while(respuesta=='s' || respuesta=='S');
	
	system("pause");
}