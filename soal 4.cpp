#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	char kalimat [50], huruf;
	int jumlah = 0, arrayindex[50], ada  = 0, k = 0;
	
	cout << "Masukkan kalimat : ";
	gets (kalimat);
	cout << "Masukkan huruf yang mau dicari : ";
	scanf ("%c", &huruf);
	
	for(int i = 0; i < strlen(kalimat); i++){
		if( huruf == kalimat[i]){
			jumlah++;
			arrayindex[k] = i;
			k++;
			ada = 1;
		}
	}
	if( ada != 0 ){
		cout << "Jumlah huruf " << huruf << " sebanyak " << jumlah << endl;
	} else {
		cout << "Huruf " << huruf << " tidak terdapat dalam kalimat yang diinput";
	}
	
	return 0;
}
