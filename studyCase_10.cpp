#include <iostream>
using namespace std;
class Mahasiswa
{
public:
    void input();
    void proses();
    void output();

private:
    int nim[4], *penunjuk;
    string nama[4], *penunjuk2;
} m;
void Mahasiswa::input()
{
    nim[0] = 2100018495;
    nim[1] = 2100018496;
    nim[2] = 2100018497;
    nim[3] = 2100018498;
    nim[4] = 2100018499;
    nama[0] = "PASCAL";
    nama[1] = "PUTRA";
    nama[2] = "DHANDY";
    nama[3] = "ATTIYA";
    nama[4] = "HANNY";
}
void Mahasiswa::proses()
{
    penunjuk = &nim[0];
    penunjuk2 = &nama[0];
}
void Mahasiswa::output()
{
    cout << "NIM : " << *penunjuk << "\nada di alamat memori " << penunjuk << endl;
    cout << "Nama : " << *penunjuk2 << "\nada di alamat memori " << penunjuk2 << endl;
    cout << "\nNiM : " << *(penunjuk + 1) << "\nada di alamat memori " << penunjuk + 1 << endl;
    cout << "Nama : " << *(penunjuk2 + 1) << "\nada di alamat memori " << penunjuk2 + 1 << endl;
    cout << "\nNIM : " << *(penunjuk + 2) << "\nada di alamat memori " << penunjuk + 2 << endl;
    cout << "Nama : " << *(penunjuk2 + 2) << "\nada di alamat memori " << penunjuk2 + 2 << endl;
    cout << "\nNIM : " << *(penunjuk + 3) << "\nada di alamat memori " << penunjuk + 3 << endl;
    cout << "Nama : " << *(penunjuk2 + 3) << "\nada di alamat memori " << penunjuk2 + 3 << endl;
    cout << "\nNIM : " << *(penunjuk + 4) << "\nada di alamat memori " << penunjuk + 4 << endl;
    cout << "Nama : " << *(penunjuk2 + 4) << "\nada di alamat memori " << penunjuk2 + 4 << endl;
}
int main()
{
    m.input();
    m.proses();
    m.output();
}