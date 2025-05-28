#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "enter n= ";
	cin >> n;
	for (int i=n-1; i>=-(n-1); i--){
		char ch= 'A';
		int k;
		if (i<0){
			k=(-1)*i;
		}
		else{
			k=i;
		}
		for (int j=k; j<n-1; j++){
			cout << " ";
		}
		for (int l=k; l>=0; l--){
			cout << ch << " ";
			ch++;
		}
		cout << endl;
	}

	return 0;
}
