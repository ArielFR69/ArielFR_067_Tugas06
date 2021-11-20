//nilai maksimal dari suatu bilangan yang diinput

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){

    int n, i, nilai, maks;
	int *ptr_maks;
    char obj;
	ptr_maks=&maks;

    start: 
	cout<<"============================================"<<endl;
	cout<<"        Progam Mencari Nilai Maksimal       "<<endl;
	cout<<"============================================"<<endl;
	cout<<"\n"; 
	cout<<"Silahkan Masukkan banyak data nilai : "; cin>>n;
	
	for(i=1; i<=n; i++){
		cout<<" Masukkan nilai ke-"<<i<<" : "; cin>>nilai;
		if(nilai>maks){
			maks=nilai;
		}
	}
	
	cout<<endl;
	cout<<" Nilai Maksimum = "<<maks<<" dengan alamat = "<<&maks<<endl;
	
	cout << "Apakah anda ingin menghitung nilai lagi? [Y/N] ="; cin>>obj;
    if (obj== 'Y' || obj== 'y'){
        goto start;
    }
    else if (obj== 'N' || obj== 'n'){
        exit( 0 );
    }
} 
