#include <iostream>
using namespace std;

class mahasiswa
{
private:
    static int jumlahMhs;

public:
    string nama;
    mahasiswa(string pNama)
    {
        nama = pNama;
        ++jumlahMhs;
        cout << "mahasiswa di buat " << nama << endl;
    }
    ~mahasiswa()
    {
        --jumlahMhs;
        cout << "distructor terpanggil " << endl;
    }
    static void setjumlah(int pjumlah)
    {
        jumlahMhs = pjumlah;
    }

    static int getjumlahMhs()
    {
        return jumlahMhs;
    }
};

int mahasiswa ::jumlahMhs = 0;

int main()
{
    cout << "jumlah mahasiswa " << mahasiswa::getjumlahMhs() << endl;

    mahasiswa Mhs1("Andi");
    mahasiswa Mhs2("Lulu");
    cout << "jumlah mahasiswa " << mahasiswa::getjumlahMhs() << endl;
    {
        mahasiswa Mhs3("Husna");
        cout << "jumlah mahasiswa " << mahasiswa::getjumlahMhs() << endl;
    }
    cout << "jumlah mahasiswa " << mahasiswa::getjumlahMhs() << endl;
    return 0;
}