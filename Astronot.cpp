#include <iostream>
using namespace std;
void seleksiAstronot(int n, int k) {
  
    int astronot[1001];
    int ukuran = n;

    
    for (int i = 0; i < n; ++i) {
        astronot[i] = i + 1;
    }

    int indeks_sekarang = 0;
      cout << "Daftar awal astronot: ";
    for (int i = 0; i < ukuran; ++i) {
          cout << astronot[i] << " ";
    }
    

    while (ukuran > 1) {
        
        int indeks_eliminasi = (indeks_sekarang + k - 1) % ukuran;
        int dieliminasi = astronot[indeks_eliminasi];

        for (int i = indeks_eliminasi; i < ukuran - 1; ++i) {
            astronot[i] = astronot[i + 1];
        }
        ukuran--; 

     
        if (dieliminasi % 2 == 0) {
            k += 2;
        }
        else {
            k -= 1;
        }

       
        if (k < 2) {
            k = 2;
        }

        indeks_sekarang = indeks_eliminasi;
        if (indeks_sekarang >= ukuran) {
            indeks_sekarang = 0;
        }

  
          cout << "Astronot " << dieliminasi << " dieliminasi. Sisa astronot: ";
        for (int i = 0; i < ukuran; ++i) {
              cout << astronot[i] << " ";
        }
          cout << "| Nilai k baru: " << k << "\n";
    }

    
  
      cout << "Astronot terakhir yang selamat dan terpilih adalah nomor: " << astronot[0] << "\n";
}

int main() {
    int n, k;
    cout << "masukkan banyaknya pilot pada baris 1 dan urutan ke k di baris k : \n";

    if (  cin >> n >> k) {
          cout << "Memulai seleksi dengan n = " << n << " dan k awal = " << k << "\n\n";
        seleksiAstronot(n, k);
    }
    return 0;
}
