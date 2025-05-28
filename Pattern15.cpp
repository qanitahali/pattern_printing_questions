#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "enter n= ";
	cin >> n;
	for (int i=0; i<n; i++){
		for (int j=i; j<n; j++){
			cout << " ";
		}
		for (int k=0; k<1; k++){
			cout << "A";
		}
		for (int l=i; l>0; l--){
			cout << " ";
		}
		for (int m=i; m >1; m--){
			cout << " ";
		}
		for (int n=0; n<1; n++){
			if (i==0){
				cout << " ";
			}
			else {
				cout << "B";
			}
		}
		cout << endl;
	}

	return 0;
}
