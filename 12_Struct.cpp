#include <iostream>
using namespace std;

struct buah{
    string warna;
    double berat;
    int harga;
    string rasa;
};

void tampilkanData(buah nama_buah){
    cout << "Warna : " << nama_buah.warna << endl;
    cout << "Berat : " << nama_buah.berat << endl;
    cout << "Harga : " << nama_buah.harga << endl;
    cout << "Rasa  : " << nama_buah.rasa << endl;
}

int main(){
    buah apel, jeruk;

    apel.warna = "merah";
    apel.berat = 10.54;
    apel.harga = 20000;
    apel.rasa = "manis";

    jeruk.warna = "orange";
    jeruk.berat = 5.79;
    jeruk.harga = 10000;
    jeruk.rasa = "asam";

    tampilkanData(apel);
    cout << endl;
    tampilkanData(jeruk);
    cout << endl;
}