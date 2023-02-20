#include <iostream>
using namespace std;
int main(){
	float C,c,R,r,F,f,k,K;
	cin>>C;
	cin>>c;
	cout<<endl;
	F = (9.0/5.0*C) + 32;
	K = C + 273.15;
	R = C * 4/5;
	f =	(9.0/5.0*c) + 32;
	k =	c + 273;
	r =	c * 4/5;
	
	cout<<"Celsius : "<<C<<"\t\tCelsius : "<<c<<endl;
	cout<<"Reamur : "<<R<<"\t\tReamur : "<<r<<endl;
	cout<<"Fahrenheit : "<<F<<"\tFahrenheit : "<<f<<endl;
	cout<<"Kelvin : "<<K<<"\t\tKelvin : "<<k<<endl;
	
	return 0;
}
