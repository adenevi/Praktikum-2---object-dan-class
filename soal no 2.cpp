#include <iostream>
using namespace std;

int main() {
	int z,i,x,n;
	cout<<"masukkan bilangan awal= "<<endl;
	cin>>x;
	cout<<"masukkan beda deret= "<<endl;
	cin>>z;
	cout<<"deret bilangan yang dikeluarkan= "<<endl;
	cin>>n;
	cout<<" maka deret bilangannya adalah:\n";
	
	for (int i=x;i<=1000;i=i+z) {	
	   if(i==x+(n)*z)
	   break;
	    
		cout<<i<<" ";
	}
}
