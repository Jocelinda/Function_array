#include <iostream>
using namespace std; 

string tambah (string nama, string umur) // g bisa beda tipe data 
{
	string kocak;
	kocak=nama+umur;
	return kocak;
}

int main ()
{ 
 string hasil;
	
	hasil=tambah("Jeje" , "2");
	cout<<hasil;
 
 return 0; 
}
