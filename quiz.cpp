#include <iostream.h>
#include <conio.h>

main()
{
char nama[30],jurusan[20];
int A,B,C,D,E,F,G,totalnt,nilaik,nilaim,nilaiq,nilaif,na,totalt;
cout<<"Masukkan nama: ";cin>>nama;
cout<<"Masukkan jurusan: "; cin>>jurusan;
cout<<"Masukkan nilai kehadiran: ";cin>>A;
cout<<"Masukkan nilai tugas 1: ";cin>>B;
cout<<"Masukkan nilai tugas 2: ";cin>>C;
cout<<"Masukkan nilai tugas 3: ";cin>>D;
cout<<"Masukkan nilai mid: ";cin>>E;
cout<<"Masukkan nilai quiz: ";cin>>F;
cout<<"Masukkan nilai final: ";cin>>G;
totalnt=(B+C+D)/3;
totalt=totalnt*20/100;
nilaik=A*20/100;
nilaim=E*20/100;
nilaiq=F*20/100;
nilaif=G*20/100;
na=totalt+nilaik+nilaim+nilaiq+nilaif;
cout<<"\n Nama Mahasiswa= " <<nama;
cout<<"\n Jurusan= "<<jurusan;
cout<<"\n Nilai Akhir Mahasiswa = "<<na;
getch();
}
