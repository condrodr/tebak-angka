//Program game tebak angka

#include<stdlib.h>
#include<time.h>
#include<iostream>

using namespace std;

main()
{
	int angka,tebak, n=0;
	
	srand(time(NULL));	//agar benar acar
	angka =rand()%100 +1;	//agar angka 1-100 maka +1
	cout<<"Saya memikirkan sebuah angka 1-100 mulailah menebak = ";
	
	do{
		
		n++;
		cin>>tebak;
		if (tebak<angka) cout<<"Angka yang anda masukkan terlalu kecil = "; 
		else if  (tebak>angka) cout<<"Angka yang anda masukkan terlalu besar = ";
		
	}while (tebak!=angka);
	
	cout<<"\nBenar!!! Anda telah menebak sebanyak "<<n<<" kali. \n";
	
	return 0;	
}

