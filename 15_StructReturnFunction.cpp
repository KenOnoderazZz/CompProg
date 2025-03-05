#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    double ipk;
};

Mahasiswa buatMahasiswa(string nama, int umur, double ipk) {
    Mahasiswa mhs;
    mhs.nama = nama;
    mhs.umur = umur;
    mhs.ipk = ipk;
    return mhs;
}

void tampilkanMahasiswa(Mahasiswa mhs) {
    cout << "Nama: " << mhs.nama << endl;
    cout << "Umur: " << mhs.umur << endl;
    cout << "IPK: " << mhs.ipk << endl;
}

int main() {
    Mahasiswa ITS = buatMahasiswa("Budi", 22, 3.8);
    tampilkanMahasiswa(ITS);
    return 0;
}
