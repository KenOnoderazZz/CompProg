#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    double ipk;
};

void tampilkanMahasiswa(Mahasiswa mhs) {
    cout << "Nama: " << mhs.nama << endl;
    cout << "Umur: " << mhs.umur << endl;
    cout << "IPK: " << mhs.ipk << endl;
}

int main() {
    Mahasiswa andi = {"Andi", 20, 3.5};
    tampilkanMahasiswa(andi);
    
    return 0;
}
