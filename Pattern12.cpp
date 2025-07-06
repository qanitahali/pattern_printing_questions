#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "enter n= ";
	cin >> n;
	char ch;
	int j;
	for (int i = n-1; i >= -(n-1); i-- ){
		ch = 'A';
		if (i < 0) {
			j = -(i);
		}else {
			j=i;
		}
		for (int k= j; k < n-1; k++){
			cout << "  ";
		}
		for (int l= j; l >= (-j); l--){
			cout << ch << " ";
			ch++;
		}
		cout << endl;
	}
	return 0;
}
