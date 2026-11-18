#include <iostream>
using namespace std;

// ========================================
// TUGAS INFORMATIKA KELAS XII
// IMPLEMENTASI ALGORITMA DALAM C++
// ========================================

// Nama Lengkap :Raisya Rizkia
// Kelas        :xii-10
// Nomor Absen  :29
// Judul Program:Program Menghitung Luas Persegi Panjang

int main() {

//DEKLARASI 
float panjang, lebar, luas;

//INPUT
cout << "Menghitung luas persegi panjang"<<endl;

cout << "Masukan nilai lebar : "<<endl;
cin >> lebar;
cout << "masukan nilai panjang :"<<endl;
cin >> panjang;

//PROSES
cout << "Hitung nilai persegi panjang :";

luas = panjang * lebar;

//OUTPUT 
cout << "Tampilan hasil luas persegi panjang : "<<luas <<endl;

return 0;

}

