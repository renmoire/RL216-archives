// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
#include <iomanip>
using namespace std;



struct elkaryawan {
    string nama; int usia; float penghasilan; float total;
};

int main() {
    elkaryawan manager; float tunjangan; float pajak;
    cout << fixed << setprecision(0);

    cout << "Nama Manager   : "; cin >> manager.nama; cout
         << "Usia Manager   : "; cin >> manager.usia; cout
         << "Penghasilan    : "; cin >> manager.penghasilan; cout
         << "Tunjangan      : "; cin >> tunjangan; cout << endl;

    pajak = 0.10 * manager.penghasilan;
    manager.total = (manager.penghasilan + tunjangan) - pajak;

    cout << endl;
    cout << "Nama            : " << manager.nama << endl
         << "Usia            : " << manager.usia << endl
         << "Penghasilan     : " << manager.penghasilan << endl
         << "Tunjangan       : " << tunjangan << endl
         << "Pajax           : " << pajak << endl
         << "Total Bersih    : " << manager.total << endl;

    return 0;
}