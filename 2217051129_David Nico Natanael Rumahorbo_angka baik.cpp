#include <iostream>
using namespace std;
int main(){
	int angka;
	cin>>angka;
	for(int i = 1;i<=angka;i++){
		if(i%5!=0){
			if(i>30){
				cout<<"NOT FOUND";
			break;
			}
			cout<<i<<endl;
		}
	}
}
