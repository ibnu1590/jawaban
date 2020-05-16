#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Masukkan panjang pola ";
	cin >> n;
	
	if (n %2 != 0 ) {
		for (int i = 1; i <= n; i++){
			for (int j = 1; j < i; j++){
			cout << " ";
			}
				for (int k = n; k >= (2*i - n); k--){
				cout << "#";
				}
				cout << endl;
		}
	} else {
		cout << "Bilangan harus ganjil";
	}
	
	cin.get();
	return 0;
}
