// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
#include <iomanip>
using namespace std;

int harga = 50000;

struct elstruct {
    string nama;
    int totalTiket, bonusTiket, totalPesanan;
    float potongan, totalBersih;
};

void elinvoice (elstruct & orang, int harga) {
    float totalKotor = orang.totalTiket * harga;
    // orang.totalTiket = orang.totalPesanan;
    orang.potongan = 0;
    orang.bonusTiket = 0;
    cout << fixed << setprecision(0);

    if (orang.totalTiket > 5 && orang.totalTiket <= 10) {
        orang.potongan = 0.1 * totalKotor;
        orang.totalBersih = totalKotor - orang.potongan;

    } else if (orang.totalTiket == 0) {
        cout << "\nTidak ada transaksi." << endl;
        return;

    } else { orang.totalBersih = totalKotor; }

    cout << endl << string(50, '-') << endl
         << "Movie            : The Guardian of Galaxy Vol. 2" << endl
         << "Harga tiket      : Rp50.000" << endl
         << "Nama             : " << orang.nama << endl
         << string(50, '-') << endl
         << "Biaya tiket      : Rp50.000 x" << orang.totalTiket << endl
         << "Potongan harga   : Rp" << orang.potongan << endl;
         if (orang.totalTiket > 10) {
            orang.bonusTiket = 1;
            orang.totalTiket += orang.bonusTiket;
            orang.totalBersih = totalKotor;
    cout << "Bonus tiket      : " << orang.bonusTiket << " tiket" << endl; } // print bonus tiket cuma muncul kalau emang beneran lebih dari 10 tiket, for aesthetic purposes
    cout << "Total tiket      : " << orang.totalTiket << " tiket" << endl
         << string(50, '-') << endl
         << "Total pembayaran : Rp" << orang.totalBersih << endl
         << string(50, '-') << endl;
}

int main() {
    elstruct orang;

    cout << "\nNama kamu?\n> "; getline(cin, orang.nama); cout
         << "\nBerapa tiket?\n> "; cin >> orang.totalTiket;

    elinvoice(orang, harga);

    return 0;
}