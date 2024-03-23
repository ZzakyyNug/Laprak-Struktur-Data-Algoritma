#include <iostream>
using namespace std;

int main() {

    cout << "Nama: Muhammad Aulia Muzzaki Nugraha" << endl;
    cout << "NIM : 2311102051" << endl;
    
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Data array :";
    for (int i = 0; i < 10; ++i) {
        cout << " " << numbers[i];
    }
    cout << endl;

    cout << "Nomor genap :";
    for (int i = 0; i < 10; ++i) {
        if (numbers[i] % 2 == 0) {
            cout << " " << numbers[i];
        }
    }
    cout << endl;

    cout << "Nomor ganjil :";
    for (int i = 0; i < 10; ++i) {
        if (numbers[i] % 2 != 0) {
            cout << " " << numbers[i];
        }
    }
    cout << endl;

    return 0;
}
