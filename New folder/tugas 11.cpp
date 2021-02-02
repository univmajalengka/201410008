#include<iostream>
using namespace std;

void garis(){
cout<<" ================================================="<<endl;
}
//program jumlah pembayaran dan diskon harga
	int main(){
	garis();
	int x, pembayaran, diskon, akhir;
	cout<<"	Program jumlah pembayaran dan Diskon Harga	"<<endl<<endl;
	garis();
	cout << ""<<endl;
	cout<<" Masukan Total Pembayaran = ";
	cin>>pembayaran;
	//diskon 0% jika pembayaran kurang dari 25.000
	if ((pembayaran>=0) && (pembayaran<25000)){
		diskon=pembayaran*0;
		akhir=pembayaran-diskon;
	cout<< " anda berbelanja kurang dari 25.000, karena anda tidak Dapet Diskon "<<endl;
	}
	//diskon 10% jika pembayaran kurang dari 50.000
	else if ((pembayaran>=25000) && (pembayaran < 50000)){
		diskon = pembayaran * 0.10;
		akhir = pembayaran - diskon;
	cout<<" Selamat, Anda Mendapatkan Diskon 10%, karena anda berbelanja kurang dari 50.000 "<<endl;	
	}
	//diskon 12,5% jika pembayaran kurang dari 100.000
	else if ((pembayaran>=50000) && (pembayaran < 100000)){
		diskon = pembayaran * 0.125;
		akhir = pembayaran - diskon;
	cout<<" Selamat, Anda Mendapatkan Diskon 12.5%, karena anda berbelanja kurang dari 100.000 "<<endl;
	}
	//diskon 15% jika pembayaran lebih dari 100.000
	else if ((pembayaran >= 100000) && (pembayaran > x)){
		diskon = pembayaran * 0.15;
		akhir = pembayaran - diskon;
	cout<<""<<endl;
	cout<<" Selamat, Anda Mendapatkan Diskon 15%, karena anda berbelanja lebih dari 100.000 "<<endl;
	garis();
	}
	else { akhir = pembayaran;
	garis();
	}
	
	cout << endl << " Jadi Total Pembayarannya : " << akhir << endl;
	cout << " Uang dari Pembeli : " ;
	cin >> pembayaran;
	cout <<" kembali : Rp. "<< 	pembayaran - akhir <<endl; 
	
	
	
	cin.get();
	return 0;
}
