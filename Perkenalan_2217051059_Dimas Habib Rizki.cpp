#include <iostream>
#include <string>
using namespace std;
int main(){
    int jumlah;
	string a,b,c,h;
    getline(cin,a);
    cin>>b;
    cin>>c;
    cout<<"Izin memperkenalkan diri nama saya "<<a<<",";
    cout<<"Dengan jumlah huruf ";
	cout<<a.length();
	cout<<" Saya mahasiswa S1 Ilmu komputer dari kelas "<<b<<".";
    cout<<"Nilai DDP saya adalah "<<c<<".";
    return 0;
}
