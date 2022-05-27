#include <iostream>
using namespace std;

string pancingan [3] = {"Kail Pancing", "Tali Pancing", "Gloryworld Kit"};
string obat [3] = {"Methylene Blue","Acriflavine HCL BPC", "Elbayou"};

void peralatan(){
	cout<<"Peralatan Mancing :\n";
	for (int a=0; a<3; a++){
		cout<<"- "<<pancingan [a]<<endl;
		}
		cout<<"Obat Ikan :\n";
		for (int b=0; b<3; b++){
			cout<<"- "<<obat [b]<<endl;
			}
	cout<<endl;	
}
void pesanan(){
	int p,q,r=112000, s=57000;
	cout<<"Pesan Peralatan Mancing apa (1-3) ? :"; cin>>p;
	cout<<"Pesan Obat Ikan apa (1-3) ?:" ; cin >>q;
	cout<<endl;
	switch (p){
		case 1:
			cout<<"Pesanan Pertama : "<<pancingan [0]<<" = Rp"<<r;
			break;
		case 2:
			cout<<"pesanan pertama : "<<pancingan [1]<<" = Rp"<<r;
			break;
		case 3:
			cout<<"pesanan pertama : "<<pancingan [2]<< " = Rp"<<r;
			break;
	}
	cout<<endl;
	switch (q){
		case 1:
			cout<<"pesanan kedua : "<< obat [0]<<" =  Rp"<<s;
			break;
		case 2:
			cout<<"pesanan kedua : "<< obat [1]<<" = Rp"<<s;
			break;
		case 3:
			cout<<"pesanan kedua : "<< obat [2]<<" = Rp"<<s;
			break;
	}
	cout<<endl;
	cout<<"\n\tTotal = Rp"<<r+s;
}
int main(){
		char pil;
		cout<<"\t-----------------------------------------------------------------------\n";
		cout<<"\t\t\tSELAMAT DATANG DI TOKO PERLENGKAPAN PANCING DAN OBAT IKAN\n";
		cout<<"\t\tAlat Mancing Serba Rp.112000 dan Obat Ikan Serba Rp.57000\n";
		cout<<"\t-----------------------------------------------------------------------\n";
			cout<<endl;
			do{
				peralatan();	
				pesanan();
				cout<<endl;
				b cout<<"\nIngin pesan lagi? (y/t) :"; cin>>pil;
		}
		while (pil=='y'|| pil== 'Y');
		cout<<"\n\t-------------TERIMA KASIH DAN SELAMAT DATANG KEMBALI-----------------"
	;}
