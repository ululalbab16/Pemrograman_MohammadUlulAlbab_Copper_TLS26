# Simulasi Seleksi Astronot 🚀

Projek ini adalah program C++ sederhana untuk mensimulasikan eliminasi astronot secara melingkar (mirip konsep *Josephus Problem*). Program dibuat menggunakan fungsi buatan sendiri (**User-Defined Function**) dan dibuat tanpa bantuan library `<vector>` (murni pakai array biasa dan dikelola manual).

## 📌 Alur & Cara Kerja Program

 alur berpikir program ini dibagi jadi beberapa tahap:

1. **Bikin Lingkaran Astronot:** Program bakal bikin array yang diisi nomor astronot dari 1 sampai `n` sesuai input.
2. **Hitung Posisi Eliminasi:** Program bakal menghitung siapa yang harus keluar pakai rumus modulo `(indeks_sekarang + k - 1) % ukuran_sisa`. Rumus ini dipakai biar urutan hitungannya bisa muter terus kayak lingkaran.
3. **Hapus Astronot (Geser Array):** Karena ga boleh pakai vector, astronot yang kalah dihapus manual dengan cara menggeser semua astronot di sebelah kanannya ke kiri, lalu ukuran total array dikurangi 1.
4. **Update Nilai Langkah (k):** Nilai `k` bakal berubah tiap ada yang kalah:
   * Kalau nomor astronotnya **Genap**, nilai `k` ditambah 2.
   * Kalau nomor astronotnya **Ganjil**, nilai `k` dikurang 1.
   * Nilai `k` ga boleh kurang dari 2, kalau kurang bakal dipaksa balik ke 2.
5. **Cari Pemenang:** Proses di atas bakal diulang-ulang terus lewat *looping*. Kalau astronotnya sisa 1 orang, dialah pemenangnya.
