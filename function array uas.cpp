#include <iostream>
using namespace std; 
void  mahasiswa (string nama[5] , float nilai[4])
{
	for (int i=0; i<5; ++i){
	}
		for ( int j=0; j<4, ++j)
		
}

  
  int main (){ 
  
  string nama[5]
  		cout << "Nama: " << endl; 
		cin >> nama[i]; 
  
  float nilai [4]
  		cout << "Nilai UTS: ";
  		cin >> nilai[1]; 
  		cout << "Nilai UAS: " << endl; 
  		cin >> nilai[2]; 
  		cout << "Nilai Tugas: " << endl; 
  		cin >> nilai [3]; 
  		cout << "Hasil Akhir: " << endl; 
  		 
  }
  
  
  #include <iostream>
#include <string>
#include <ios>
#include <iomanip>
using namespace std;

void solve(string name[5], float score[5][4]){
	cout << "Nama       UTS        UAS        Tugas      Nilai Akhir" << endl;
	cout << "-------------------------------------------------------" << endl;
	for (int i = 0; i < 5; i++){
		cout<<setiosflags(ios::left)<<setw(11)<<name[i];
		for (int j = 0; j < 4; j++){
			cout<<setiosflags(ios::left)<<setw(11)<<score[i][j];
		}
		cout << endl;
	}
}

int main(){
	string nama[5];
	// index 0 = UTS, index 1 = UAS, index 2 = Tugas, index 3 = Nilai akhir (sum index 0 - 2)
	float nilai[5][4];
	
	for (int i = 0; i < 5; i++){
		cout << "Nama siswa " << i+1 << " : "; cin >> nama[i];
		cout << "Nilai UTS siswa " << i+1 << " : "; cin >> nilai[i][0];
		cout << "Nilai UAS siswa " << i+1 << " : "; cin >> nilai[i][1];
		cout << "Nilai Tugas siswa " << i+1 << " : "; cin >> nilai[i][2];
		nilai[i][3] = nilai[i][0] + nilai[i][1] + nilai[i][2];
	}
	
	solve (nama, nilai);
	return 0;
}
