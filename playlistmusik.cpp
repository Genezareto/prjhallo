#include <iostream>
#include <string>
using namespace std;
int main() {
    int pilihan;
    string judul, penyanyi;

    do {
        cout << "\n===== Playlist Musik =====\n";
        cout << "1. Tambah Lagu\n";
        cout << "2. Tampilkan Playlist\n";
        cout << "3. Hapus Lagu\n";
        cout << "4. Cari Lagu\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore(); // Menghindari masalah getline setelah cin

       
    return 0;
}
}