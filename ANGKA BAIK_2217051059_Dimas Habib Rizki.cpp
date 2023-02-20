#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i = 1;i<=a;i++){
		if(i%5!=0){
			if(i>30){
				cout<<"NOT FOUND";
			break;
			}
			cout<<i<<endl;
		}
	}
}
