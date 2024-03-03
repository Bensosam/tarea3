#include <iostream>
using namespace std;
main(){
	//i++, i+=1, i=i+1
	int contar=0;
	for (int i=0;i<=10;i+=2){
		cout<<i<<endl;
		contar++;
	}
	cout<<"ciclos "<<contar<<endl;
	system("pause");
}