#include <iostream>
#include <conio.h>
using namespace std;

main(){

    int nilai_matkul,matkul,a;
	char nama[30],nim[30],prodi[30],nama_matkul[30],grade[30]="Grade Nilai Mata Kuliah Anda";
	char obj,*Xmatkul,*Xgrade,*Xnama,*Xnim,*Xprodi;
	Xmatkul=nama_matkul;
	Xgrade=grade;
	Xnama=nama;
	Xnim=nim;
	Xprodi=Xprodi;
	string grd;

    start:
    cout<<"============================================================"<<endl;
	cout<<"|     Progam Menentukan Keterangan Nilai Mata Kuliah       |"<<endl;
	cout<<"============================================================"<<endl;
	cout<<"\n";
	
	cout<<"| Nama                    : "; cin.getline (Xnama,30);
	cout<<"| NIM                     : "; cin.getline (Xnim,30);
	cout<<"| Progam Studi            : "; cin.getline (Xprodi,30);
	cout<<"| Jumlah Data Mata Kuliah : "; cin>>matkul;
	
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"\n";

    for (int i=1;i<=matkul;i++)
	{
		cout<<"              Data Mata Kuliah ke-"<<i<<"                   "<<endl;
		cout<<"============================================================"<<endl;
		cout<<"| Nama Mata Kuliah  : "; cin>>Xmatkul;
		cout<<"| Nilai Mata Kuliah : "; cin>>nilai_matkul;
		
		if ((nilai_matkul>=90)&&(nilai_matkul<=100))
		{
			grd="A";
		}
		else if ((nilai_matkul>=80)&&(nilai_matkul<90))
		{
			grd="B";
		}
		else if ((nilai_matkul>=70)&&(nilai_matkul<80))
		{
			grd="C";
		}
		else if ((nilai_matkul>=60)&&(nilai_matkul<70))
		{
			grd="D";
		}
		else if ((nilai_matkul>=50)&&(nilai_matkul<60))
		{
			grd="E";
		}
		else
		{
			grd="Tidak Lulus";
		}
		cout<<"| "<<Xgrade<<"    : "<<grd<<endl;
		cout<<"============================================================"<<endl;
		cout<<"\n";


    cout << "Apakah anda ingin menghitung nilai lagi? [Y/N] ="; cin>>obj;
    if (obj== 'Y' || obj== 'y'){
        goto start;
    }
    else if (obj== 'N' || obj== 'n'){
        exit( 0 );
        }
    }
}
