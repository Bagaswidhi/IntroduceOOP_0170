#include <iostream>
using namespace std;

class Hewan
{
private:
    string jenisKelamin;
public:
    string tipe;
    string umur;

    void inputData()
    {
        cout << "Masukkan jenis kelamin = ";
        cin >> jenisKelamin;
        cout << "Masukkan tipe hewan = ";
        cin >> tipe;
        cout << "Masukkan umur hewan = ";
        cin >> umur;
    }
    
    void tampilHewan()
    {
        cout << "Jenis kelamin hewan = " << jenisKelamin << endl;
    }
};

int main()
{
    Hewan hwn1;
    hwn1.inputData();
    cout << "Umur hewan = " << hwn1.umur << endl;
    cout << "Tipe hewan = " << hwn1.tipe << endl;
    hwn1.tampilHewan();
}
