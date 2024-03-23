#include <iostream>
using namespace std;

int main() {

    cout << "Nama: Muhammad Aulia Muzzaki Nugraha" << endl;
    cout << "NIM : 2311102051" << endl;
    
    int x_size, y_size, z_size;

    cout << "Masukkan ukuran array (x y z): ";
    cin >> x_size >> y_size >> z_size;

    int arr[x_size][y_size][z_size];

    cout << "Masukkan elemen array:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Array[" << x << "][" << y << "][" << z << "]: ";
                cin >> arr[x][y][z];
            }
        }
    }

    cout << "Elemen array yang dimasukkan:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
