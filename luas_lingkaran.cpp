/*
	Nama lengkap : Hafiz Ramadhan
	Nomor Induk Mahasiswa : [encrypted]
	Luas = π × r²
*/

#include <iostream>
#include <limits>

using namespace std;

int main(){

	int jari;
	float hasil, pie = 3.14;

	cout<<"Mencari Luas Lingkaran\n";
	cout<<"---------------------------\n";
	cout<<"Masukan jari-jari : "; cin >> jari;
	if(cin.good()){
		hasil = pie * jari;
		cout<<"Luas Lingkaran adalah : " << hasil << "m";
		cout<<"\n";
	}else{
		cout<<"Input tidak valid, silahkan masukan angka";
	}
}
