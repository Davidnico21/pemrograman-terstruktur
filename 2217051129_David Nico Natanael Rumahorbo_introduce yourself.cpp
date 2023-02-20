#include <iostream>
using namespace std;
int main(){

	string nama, kelas, nilai;

	getline(cin,nama);
	cin>>kelas;
	cin>>nilai;
	cout<<"Izin memperkenalkan diri nama saya "<<nama;
	cout<<" Dengan jumlah huruf "<<nama.length();
	cout<<", Saya mahasiswa S1 Ilmu komputer dari kelas "<<kelas;
	cout<<",s Nilai DDP saya adalah "<<nilai<<".";

return 0;
}
