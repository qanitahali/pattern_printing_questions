#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "enter n= ";
	cin >> n;
	char ch= 'A';
	for (int i = 0; i < n; i++ ){
		for (int k= i ; k >= 0; k--){
			cout << ch << " ";
		}
		cout << endl;
		ch++;
	}
	return 0;
}
