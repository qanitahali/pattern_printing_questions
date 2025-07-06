#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "enter n= ";
	cin >> n;
	char ch= 'A';
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (i==j || i+j==n-1){
				cout << ch;
			}
			else{
				cout <<" ";
			}
		}
		cout << endl;
		ch++;
	}

	return 0;
}
