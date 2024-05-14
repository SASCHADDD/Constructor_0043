#include<iostream>
#include<string>
using namespace std;

class Mahasiswa
{
    public:
        int nim;
        string nama;

    public:
        Mahasiswa()
        {
            nim = 0;
            nama = "";
        };
            Mahasiswa(int iNim)
        {
            nim = iNim;

        };
            Mahasiswa(string iNama)
            {
                nama = iNama;
            }
};
void cetak(){
    cout << "NIM = " << nim << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
};

int main()
{
    Mahasiswa mhs1;
    Mahasiswa mhs2(20);
    Mahasiswa mhs3("Indra");
    Mahasiswa mhs4(30, "Fauzan");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}