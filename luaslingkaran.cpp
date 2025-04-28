#include <iostream>
using namespace std;

class Lingkaran
{
public:

    double jariJari;

    void inputData(){
        cout << "Masukkan Jari-Jari lingkaran = " ;
        cin >> jariJari;
    }
    double luaslingkaran(double a){
        return 3.14 * a * a;
    }
};

int main()
{
    Lingkaran ll;
    ll.inputData();
    cout << "Luas lingkaran = " << ll.luaslingkaran(ll.jariJari) << endl;
}
