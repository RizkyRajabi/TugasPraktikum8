#include <iostream>
#include <string>

using namespace std;

// Struktur untuk menyimpan informasi zodiak
struct Zodiak {
    int tanggalAwal;
    int bulanAwal;
    int tanggalAkhir;
    int bulanAkhir;
    string namaZodiak;
};

// Array untuk menyimpan data semua zodiak
Zodiak zodiak[] = {
    {21, 3, 19, 4, "ARIES"},
    {20, 4, 20, 5, "TAURUS"},
    {21, 5, 20, 6, "GEMINI"},
    {21, 6, 22, 7, "CANCER"},
    {23, 7, 22, 8, "LEO"},
    {23, 8, 22, 9, "VIRGO"},
    {23, 9, 22, 10, "LIBRA"},
    {23, 10, 21, 11, "SCORPIO"},
    {22, 11, 21, 12, "SAGITTARIUS"},
    {22, 12, 19, 1, "CAPRICORN"},
    {20, 1, 18, 2, "AQUARIUS"},
    {19, 2, 20, 3, "PISCES"},
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
string tentukanZodiak(int tanggal, int bulan) {
    for (int i = 0; i < sizeof(zodiak) / sizeof(zodiak[0]); i++) {
        // Memeriksa jika tanggal dan bulan sesuai dengan rentang zodiak
        if ((bulan == zodiak[i].bulanAwal && tanggal >= zodiak[i].tanggalAwal) ||
            (bulan == zodiak[i].bulanAkhir && tanggal <= zodiak[i].tanggalAkhir)) {
            return zodiak[i].namaZodiak;
        }
    }
    return "Zodiak tidak ditemukan";
}

int main() {
    int tanggal, bulan, tahun;

    cout << "Tanggal Lahir Anda [tgl-bln-tahun]: ";
    // Mengubah input untuk menerima format tgl-bln-tahun
    char pemisah; // Variabel untuk menyimpan karakter pemisah
    cin >> tanggal >> pemisah >> bulan >> pemisah >> tahun;

    string zodiakAnda = tentukanZodiak(tanggal, bulan);

    cout << "Zodiak Anda adalah: " << zodiakAnda << endl;

    return 0;
}
