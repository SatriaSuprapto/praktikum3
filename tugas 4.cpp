#include<iostream>
using namespace std;
int main (){
	int nilai;
	cout<<"Masukkan Angka : \n";
	cin>>nilai;
	if (nilai>=1){
		cout<<endl<<"Nilai Yang Anda Masukkan Bernilai Positif";
	}
	else  if (nilai<=-1){
		cout<<endl<<"Nilai Yang Anda Masukkan Bernilai Negatif";
	} 
	else if (nilai==0){
		cout<<endl<<"Nilai Yang Anda Masukkan Bernilai Nol ( 0 )";
	}
}
