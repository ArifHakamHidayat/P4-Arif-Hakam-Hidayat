#include <iostream>
#include <conio.h>
#include <stdio.h>


using namespace std;

int main()
{
	int x,y,z;
	x=y=z=0;
	char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
	cout<<"------PROGRAM QUIS PILIHAN GANDA TENTANG COVID-19------";
	cin>>ch1;

	cout<<"	Welcome "<<ch1<<"waspada covid-19.";
	cout<<"Masukkan jawaban dalam bentuk 'a', 'b' dan 'hanya'. ";
	cout<<"APAKAH DISEBUT COVID_19?"<<endl<<"a.virus corona"<<endl<<"b.carain"<<"c.curon";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Kerja bagus nilaimu adalah "<<x;
	}
	else
	cout<<"Maaf salah jawab.";
	getch();

	cout<<"Virus Corona (COVID-19) yang menyerang manusia muncul di negara?"<<endl<<"a.italia"<<endl<<"b.itali"<<endl<<"c.china";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"kerja bagus nilaimu adalah "<<x;
	}
	else
	cout<<"maaf salah jawab.";
	getch();
	
	cout<<"COVID-19 bisa masuk melalui anggota-anggota tubuh di bawah ini, kecuali...?"<<endl<<"a.kaki"<<endl<<"b.hidung"<<endl<<"c.telinga";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"kerja bagus nilaimu adalah "<<x;
	}
	else
	cout<<"maaf salah jawab.";
	getch();
	
	cout<<"masa inkubasi COVID-19 adalah?"<<endl<<"a.2 hari"<<endl<<"b.14 hari"<<endl<<"c.30 hari";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"kerja bagus nilaimu adalah "<<x;
	}
	else
	cout<<"maaf salah jawab.";
	getch();
	
	cout<<"Cuci tangan yang paling baik dilakukan dengan menggunakan sabun pada...??"<<endl<<"a. air mengalir"<<endl<<"b. air dalam wadah"<<endl<<"c. genangan air";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"kerja bagus nilaimu adalah "<<x;
	}
	else
	cout<<"maaf salah jawab.";
	getch();
	
	cout<<"Virus corona (COVID-19) dibawa oleh hewan apa... ??"<<endl<<"a. kelelawar"<<endl<<"b. kambing"<<endl<<"c. nyamuk";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"kerja bagus nilaimu adalah "<<x;
	}
	else
	cout<<"maaf salah jawab.";
	getch();
	
	cout<<"	Suhu tubuh yang bisa diindikasikan sedang terjangkit penyakit termasuk COVID-19 yaitu..? ??"<<endl<<"a. 21 C"<<endl<<"b. 16 C"<<endl<<"c. 38 C";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"kerja bagus nilaimu adalah "<<x;
	}
	else
	cout<<"maaf salah jawab.";
	getch();
	cout<<"bagaimana cara mencegah virus corona ??"<<endl<<"a. begadang"<<endl<<"b. cuci tangan"<<endl<<"c. mandi";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"kerja bagus nilaimu adalah "<<x;
	}
	else
	cout<<"maaf salah jawab.";
	getch();
	
	cout<<"Apakah masker benar-benar efektif dalam mengurangi risiko terkena Virus Corona ??"<<endl<<"a. ya benar"<<endl<<"b. salah"<<endl<<"c. mungkin";	
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"kerja bagus nilaimu adalah "<<x;
	}
	else
	cout<<"maaf salah jawab.";
	getch();
	
	cout<<"Yang resiko paling parah terjangkit virus corona adalah ??"<<endl<<"a. anak-anak"<<endl<<"b. orang tua"<<endl<<"c. dewasa";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"kerja bagus nilaimu adalah "<<x;
	}
	else
	cout<<"maaf salah jawab.";
	getch();
	
	if(x==100)
	cout<<"No cheating...... You have done this earlier also.";
	if(x==90)
	cout<<"kamu sangat cerdas nilaimu adalah 90";
	if(x==80)
	cout<<"kamu cerdas nilaimu adalah 80";
	if(50==x||x==70||x==60)
	cout<<"kamu rata rata nilaimu adalah "<<x<<"semoga beruntung selanjutnya";
	else if(x<=40)
	cout<<"Tidak digunakan ........ Bahkan 5 pertanyaan saja tidak benar";
	getch();
	system("cls");
}
