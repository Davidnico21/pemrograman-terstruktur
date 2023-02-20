#include <iostream>
using namespace std;
int main (){
	int c, r, f, k;
	cin>>c;
	
	cout<<"celcius : "<< c<<endl;
	r = c-8;
	cout<<"reamur : "<< r<<endl;
	f =  (9.0/5.0 * c) + 32;
	cout<<"fareinheit : "<<f<<endl; 
	k = c + 273.15;
	cout<<"kelvin : "<<k; 
return 0;
}
