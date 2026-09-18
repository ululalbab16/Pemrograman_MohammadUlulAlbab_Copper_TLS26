 Astronot

Projek ini adalah program C++ sederhana untuk mensimulasikan eliminasi astronot secara melingkar (mirip konsep *Josephus Problem*). Program dibuat menggunakan fungsi buatan sendiri (**User-Defined Function**) dan dibuat tanpa bantuan library `<vector>` (murni pakai array biasa dan dikelola manual).


1.  Program bakal bikin array yang diisi nomor astronot dari 1 sampai `n` sesuai input.
2.  Program bakal menghitung siapa yang harus keluar pakai rumus modulo `(indeks_sekarang + k - 1) % ukuran_sisa`. Rumus ini dipakai biar urutan hitungannya bisa muter terus kayak lingkaran.
3. Karena ga boleh pakai vector, astronot yang kalah dihapus manual dengan cara menggeser semua astronot di sebelah kanannya ke kiri, lalu ukuran total array dikurangi 1.
4. Nilai `k` bakal berubah tiap ada yang kalah:
   * Kalau nomor astronotnya **Genap**, nilai `k` ditambah 2.
   * Kalau nomor astronotnya **Ganjil**, nilai `k` dikurang 1.
   * Nilai `k` ga boleh kurang dari 2, kalau kurang bakal dipaksa balik ke 2.
 5.Proses di atas bakal diulang-ulang terus lewat *looping*. Kalau astronotnya sisa 1 orang, dialah pemenangnya.



ALIENS
Logikanya
Huruf pertama gak berubah (gesernya 0)
Huruf ke-i digeser pakai nilai huruf ASLI sebelum dia (bukan huruf hasil sandi), ini yang paling gampang salah kalau gak teliti
Kalau hasil geser lewat Z, muter lagi dari A
