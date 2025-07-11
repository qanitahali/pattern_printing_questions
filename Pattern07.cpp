#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "enter n= ";
	cin >> n;
	char ch;
	for (int i = 0; i < n; i++ ){
		ch= 'A';
		for (int k= i ; k >= 0; k--){
			cout << ch << " ";
			ch++;
		}
		cout << endl;
	}
	return 0;
}
