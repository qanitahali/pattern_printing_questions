#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "enter n= ";
	cin >> n;
	for (int i=0; i<n; i++){
		char ch='A';
		char ch2= 'A'+i-1;
		for (int j=i; j<n; j++){
			cout << " ";
		}
		for (int k=i; k>=0; k--){
			cout << ch ;
			ch++;
		}
		for (int l=i; l>0; l--){
			cout << ch2;
			ch2--;
		}
		cout << endl;
	}
	return 0;
}
