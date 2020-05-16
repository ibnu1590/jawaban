#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
	int kumpulanData[9] = {5,13,7,5,9,20,9,5,14};
	int kemunculanData[9], jumlah, tmp;

	for(int h = 0; h < 9; h++ ){
		jumlah = 0;
			for(int i = 0; i < 9; i++){
				if( kumpulanData[h] == kumpulanData[i])
				jumlah++;
			}
			
		if(kumpulanData[h] != kumpulanData[h-1])
		cout << "Nilai :" << kumpulanData[h] << " : jumlahnya : " << jumlah << endl;
	}

	getch();


}
