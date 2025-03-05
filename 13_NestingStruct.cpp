#include <iostream>
using namespace std;

struct aktor{
    string nama;
    int tahun_lahir;
};

struct film{
    string judul;
    string genre;
    int tahun;

    // struct aktor
    aktor pemeran_1;
    aktor pemeran_2;
};

int main(){
    aktor aktor1, aktor2;
    film film1;

    // buat aktor 1
    aktor1.nama = "Veeya";
    aktor1.tahun_lahir = 2004;

    // buat aktor 2
    aktor2.nama = "Katniss Everdeen";
    aktor2.tahun_lahir = 1995;

    // buat film
    film1.judul = "Pengabdi ITS";
    film1.genre = "Adventure";
    film1.tahun = 2023;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    cout << "========= " << film1.judul << " =========" << endl;
    cout << "Genre : " << film1.genre << endl;
    cout << "Tahun : " << film1.tahun << endl;
    cout << "Pemeran 1 : ";
    cout << film1.pemeran_1.nama << " (" << film1.pemeran_1.tahun_lahir << ")" << endl;
    cout << "Pemeran 2 : ";
    cout << film1.pemeran_2.nama << " (" << film1.pemeran_2.tahun_lahir << ")" << endl;
    
}
