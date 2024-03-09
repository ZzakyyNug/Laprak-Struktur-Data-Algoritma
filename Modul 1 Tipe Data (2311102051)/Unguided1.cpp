#include <iostream>

using namespace std;
// Fungsi pertama untuk menjumlahkan dua angka
int pengurangan(int a, int b) {
    return a - b;
}

// Fungsi kedua untuk mengalikan dua angka
float bagi(float a, float b) {
    return a / b;
}

int main() {
    // Menggunakan tipe data primitif int dan float
    int angka1 = 2024, angka2 = 2005;
    float angka3 = 19.95, angka4 = 1.5;

    // Memanggil fungsi pertama
    int hasilPengurangan = pengurangan(angka1, angka2);
    cout << "Hasil pengurangan: " << hasilPengurangan << endl;

    // Memanggil fungsi kedua
    float hasilPembagi = bagi(angka3, angka4);
    cout << "Hasil perkalian: " << hasilPembagi << endl;

    return 0;
}
