#include <iostream>
using namespace std;

// Definition of the structure representing Warga data
struct Warga {
    string nama;
    int64_t nik;
};

// Definition of the class representing motor data
class DealerMotor {
private:
    string merek;
    string nopol;

public:
    DealerMotor(string merek, string nopol) {
        this->merek = merek;
        this->nopol = nopol;
    }

    void info() {
        cout << "Merek Motor: " << merek << endl;
        cout << "Nomer Polisi Motor: " << nopol << endl;
    }
};

int main() {
    Warga wrg;
    wrg.nama = "Aulia Muzzaki";
    wrg.nik = 33290224567000;

    cout << "Nama Warga yang terdaftar: " << wrg.nama << endl;
    cout << "NIK yang terdaftar: " << wrg.nik << endl;

    // Using the DealerMotor class
    DealerMotor mtr("Honda", "G 2852 XR");
    mtr.info();

    return 0;
}
