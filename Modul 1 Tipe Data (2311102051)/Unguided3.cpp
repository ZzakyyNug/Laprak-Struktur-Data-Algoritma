#include <iostream>
#include <map> 
using namespace std;

int main() {
    // Mendeklarasikan fungsi array
    map<int, string> NamaKeluarga;
    
    NamaKeluarga[0] = "Lia";
    NamaKeluarga[1] = "Iqbal";
    NamaKeluarga[2] = "Akbar";
    NamaKeluarga[3] = "Intan";
    NamaKeluarga[4] = "Zaki";

    // Mencetak array
    cout << "Anak pertama : " << NamaKeluarga[0] << endl
         << "Anak kedua : " << NamaKeluarga[1] << endl
         << "Anak ketiga : " << NamaKeluarga[2] << endl
         << "Anak keempat : " << NamaKeluarga[3] << endl
         << "Anak kelima : " << NamaKeluarga[4] << endl;

    return 0;
}
