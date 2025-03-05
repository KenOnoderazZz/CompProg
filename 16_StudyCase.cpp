#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Struct Mahasiswa
struct Mahasiswa {
    string nama;
    string nrp;
    string jurusan;
    float ipk;
};

// Class DataMahasiswa
class DataMahasiswa {
private:
    const int MAX_MAHASISWA = 100;
    Mahasiswa daftarMahasiswa[100];
    int jumlahMahasiswa = 0;

public:
    // Fungsi untuk menambah mahasiswa
    void TambahMahasiswa() {
        if (jumlahMahasiswa < MAX_MAHASISWA) {
            // input data
            Mahasiswa mhs;
            cout << "------- Tambahkan Data Mahasiswa -------" << endl;
            /****************** Mensetting ulang cin agar bisa untuk getline ******************/
            cin.clear(); // menghapus status kesalahan (failure status) dari objek cin
            cin.ignore(); // membersihkan karakter newline (\n) yang tersisa di dalam buffer.
            /***********************************************************************************/
            cout << "Nama    : "; getline(cin, mhs.nama);
            cout << "NRP     : "; getline(cin, mhs.nrp);
            cout << "Jurusan : "; getline(cin, mhs.jurusan);
            cout << "IPK     : "; cin >> mhs.ipk;
            cout << endl;

            daftarMahasiswa[jumlahMahasiswa] = mhs;
            jumlahMahasiswa++;

            cout << "Mahasiswa berhasil ditambahkan." << endl << endl;
        } else {
            cout << "Kuota mahasiswa penuh. Tidak dapat menambahkan lagi." << endl;
        }
    }

    // Fungsi untuk menampilkan data mahasiswa
    void TampilkanData() {
        // header
        cout << "----------------------------------------------------------------------" << endl;
        cout << setw(27) << left << "Nama";
        cout << setw(15) << left << "NRP";
        cout << setw(22) << left << "Jurusan";
        cout << setw(5) << left << "IPK";
        cout << endl;
        cout << "----------------------------------------------------------------------" << endl;

        // data
        for (int i=0; i<jumlahMahasiswa; i++){
            cout << setw(27) << left << daftarMahasiswa[i].nama;
            cout << setw(15) << left << daftarMahasiswa[i].nrp;
            cout << setw(22) << left << daftarMahasiswa[i].jurusan;
            cout << setw(5) << left << setprecision(2) << fixed << daftarMahasiswa[i].ipk;
            cout << endl;
        }
        cout << "----------------------------------------------------------------------" << endl << endl;
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan NRP
    void CariMahasiswa(string nrp) {
        cout << endl;
        for (int i=0; i<jumlahMahasiswa; i++){
            if (daftarMahasiswa[i].nrp == nrp) {
                cout << "------- Data Mahasiswa -------" << endl;
                cout << "Nama: " << daftarMahasiswa[i].nama << endl;
                cout << "NRP: " << daftarMahasiswa[i].nrp << endl;
                cout << "Jurusan: " << daftarMahasiswa[i].jurusan << endl;
                cout << "IPK: " << daftarMahasiswa[i].ipk << endl;
                cout << endl;
                return;
            }
        }
        cout << "Mahasiswa dengan NRP " << nrp << " tidak ditemukan." << endl;
        cout << endl;
    }

    // Fungsi untuk menghapus data mahasiswa berdasarkan NRP
    void HapusMahasiswa(string nrp) {
        for (int i=0; i<jumlahMahasiswa; i++){
            if (daftarMahasiswa[i].nrp == nrp){
                for (int j=i; j<jumlahMahasiswa-1; j++) {
                    daftarMahasiswa[j] = daftarMahasiswa[j + 1];
                }
                jumlahMahasiswa--;
                cout << "Mahasiswa dengan NRP " << nrp << " berhasil dihapus." << endl << endl;
                return;
            }
        }
        cout << "Mahasiswa dengan NRP " << nrp << " tidak ditemukan." << endl << endl;
        cout << endl;
    }
};

int main() {
    DataMahasiswa dataMahasiswa;
    int pilihan;
    string nrpCari, nrpHapus;

    do {
        cout << "========== Menu ==============" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Data Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa" << endl;
        cout << "4. Hapus Mahasiswa" << endl;
        cout << "0. Keluar" << endl;
        cout << "==============================" << endl;
        cout << "Pilih menu: "; cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1:
                dataMahasiswa.TambahMahasiswa();
                break;
            case 2:
                dataMahasiswa.TampilkanData();
                break;
            case 3:
                cout << "Masukkan NRP yang ingin dicari: "; cin >> nrpCari;
                dataMahasiswa.CariMahasiswa(nrpCari);
                break;
            case 4:
                cout << "Masukkan NRP yang ingin dihapus: "; cin >> nrpHapus;
                dataMahasiswa.HapusMahasiswa(nrpHapus);
                break;
            case 0:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Menu tidak valid. Silakan pilih menu yang sesuai." << endl;
        }
    } while (pilihan != 0);
    cout << endl;

    return 0;
}


