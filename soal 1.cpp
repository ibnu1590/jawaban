#include <iostream>
using namespace std;

int main()
{
	int n;
	char z;
	
	cout << "Masukkan pola ";
	cin >> n;
	
	if (n != z ){
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= i; j++){
			cout << "#";
			}
		
		cout << endl;
		} 
	} else {
		cout << "parameter harus angka dan positif";
	}
		
	
	
	cin.get();
	return 0;
}
