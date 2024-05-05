#include <iostream>
using namespace std;


int main()
{
    float matematika, inggris, rerata;
    string status;
    cout << "nilai matematika = " << endl;
    cin >> matematika;
    cout << "nilai inggris = " << endl;
    cin >> inggris;
    rerata = (matematika + inggris) / 2;
    if (matematika >= 80){
        status = "lulus";
    }
    else if (rerata >= 70){
        status = "lulus";
    }
    else{
        status = "gagal";
    }
    cout << "rerata = "<< rerata << endl;
    cout << "status kelulusan = " << status << endl;  
}

//1.3 deklarasi variable yaitu string, cout dan cin.
//
//2.
//
//3. implementasi struct :
//   struct Mahasiswa {
//    string nim;
//    string nama;
//    string alamat;
//    string umur;
//};
//
//4. implementasi prosedur dan fungsi : contohnya seperti void
//   void inputData()
//  {
//    cout << "Masukkan Bilangan pertama : ";
//    cin >> bilangan1;
//    cout << "Masukkan Bilangan Kedua : ";
//    cin >> bilangan2;
//  }
//
//5. implementasi dari looping : looping itu terdapat 3 yaitu for, while dan do while. yang saya pake buat contoh adalah do while.
//    do
//    {
//       cout << "makan" << endl;
//       cout << "main game" << endl;
//       cout << "Ibadah" << endl;
//       
//       cout << "Apakah anda masih hidup? (Yes/No)";
//       cin >> pilihan;
//    } while (pilihan == "Yes");