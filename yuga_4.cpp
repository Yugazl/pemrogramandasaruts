#include <iostream>
using namespace std;
 int main()
 {
 	int kehadiran, tugas, uts, uas;
 	int nilaiakhir;
 	cout<<"kehadiran =" <<endl;
 	cin>>kehadiran;
 	cout<<"tugas =" <<endl;
 	cin>>tugas;
 	cout<<"uts =" <<endl;
 	cin>>uts;
 	cout<<"uas =" <<endl;
 	cin>>uas;
 	
 	nilaiakhir = (kehadiran + tugas + uts + uas) / 4;
 	cout << "nilai akhir =" << nilaiakhir << endl;
 }
