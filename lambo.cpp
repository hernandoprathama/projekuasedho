/*
Nama     : Hernando Prathama Putra
NIM		 :17.11.1560
Matkul	 :Pemrograman
kategori :Ujian smester 2
*/
#include <iostream>
using namespace std;


class bangun_ruang			
{
public:
    
    int s,r,t,la,ls,lt,st,lu;
    double vo;


 void tabung()
    {
        cout<<endl;
        cout<<"\"Hitung Luas Permukaan Tabung \""<<endl;
        cout<<" Masukkan Nilai Luas Alas    : ";cin>>la;
        cout<<" Masukkan Nilai Luas Selimut : ";cin>>ls;
        lu=la*ls;
        cout<<" Luas Permukaan Tabung         : "<<lu<<endl;

        cout<<endl;
        cout<<"\"Hitung Volume Tabung \""<<endl;
        cout<<" Masukkan Nilai Luas Alas    : ";cin>>la;
        cout<<" Masukkan Nilai Tinggi Tabung : ";cin>>t;
        vo=la*t;
        cout<<" Volume Tabung               : "<<lu<<endl;
    }
    void kubus()
    {
        cout<<endl;
        cout<<"\"Hitung Luas Permukaan Kubus \""<<endl;
        cout<<" Masukkan Nilai sisi  : ";cin>>s;
        lu=6*(s*s);
        cout<<" Luas Permukaan Kubus : "<<lu<<endl;

        cout<<endl;
        cout<<"\"Hitung Volume Kubus \""<<endl;
        cout<<" Masukkan Nilai sisi : ";cin>>s;
        vo=s*s*s;
        cout<<" Volume Kubus        : "<<vo<<endl;
    }
    
    
	 void bola()
    {
        cout<<endl;
        cout<<"\"Hitung Luas Permukaan Bola \""<<endl;
        cout<<" Masukkan Nilai Jari-jari : ";cin>>r;
        lu=4*3.14*r*r;
        cout<<" Luas Permukaan bola      : "<<lu<<endl;
        
        cout<<endl;
        cout<<"\"Hitung Volume Bola \""<<endl;
        cout<<" Masukkan Nilai Jari-jari : ";cin>>r;
        vo=4/3*3.14*r*r*r;
        cout<<" Volume Bola              : "<<vo<<endl;
    }

};



int main()
{    
    int Daftar;
atas:
        cout<<" Menu Bangun Ruang: "<<endl;
        cout<<"1.Tabung"<<endl;
        cout<<"2.Kubus"<<endl;
        cout<<"3.Bola"<<endl;
        cout<<"0.KELUAR"<<endl;
        cout<<"Daftar : ";

    cout<<"Pilih banguan yang mau dicari : ";cin>>Daftar;
     bangun_ruang nya;
    switch (Daftar)

    {
    case 1:nya.tabung();
        goto atas;
        break;
	case 2:nya.kubus();
        goto atas;
        break;
    case 3:nya.bola();
        goto atas;
        break;
    case 0:break;

    system("pause");
    return 0;
}


}
