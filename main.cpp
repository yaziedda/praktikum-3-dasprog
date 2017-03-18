#include <iostream>

using namespace std;

int cekTransport(int grade){
    int transport;
    if(grade == 1){
        transport = 10000;
    }else if(grade == 2){
        transport = 12000;
    }else if(grade == 3){
        transport = 15000;
    }else{
        transport = 0;
    }

    return transport;
}

int cekhonor(string golongan, int masakerja){
    int honor;
    if(golongan == "A"){
        if(masakerja <= 2){
            honor = 500000;
        }else{
            honor = 600000;
        }
    }else if(golongan == "B"){
        if(masakerja <= 2){
            honor = 600000;
        }else{
            honor = 700000;
        }
    }else if(golongan == "C"){
        if(masakerja <= 2){
            honor = 750000;
        }else{
            honor = 850000;
        }
    }else{
        honor = 0;
    }

    return honor;
}

void task12(){
    cout << "\nMenentukan Jumlah Honor Pegawai degan kriteria sebagai berikut\n";
    cout << "\nJumlah Honor = Honor + (Transport * Jumlah Hari Kerja)\n";
    string golongan;
    int harikerja, honor, jumlahhonor, transport, masakerja, grade;

    cout << "Masukan golongan A, B atau C : "; cin >> golongan;
    cout << "Masukan masa kerja berdasarkan tahun : "; cin >> masakerja;
    cout << "Isi hari kerja : "; cin >> harikerja;
    cout << "Pilih grade transport isi 1, 2 atau 3 : "; cin >> grade;

    honor = cekhonor(golongan, masakerja);

    transport = cekTransport(grade);

    jumlahhonor = honor + (transport * harikerja);

    cout << "Jumlah honor adalah : Rp. " << jumlahhonor << endl;
    cout << "Jumlah honor dan transport : Rp. " << honor << " dan Rp. " << transport << endl;


}

int cekKodePaket(string kode){
    int harga;
    if(kode == "A"){
        harga = 15000;
    }else if(kode == "B"){
        harga = 12000;
    }else if(kode == "C"){
        harga = 10000;
    }else if(kode == "D"){
        harga = 8000;
    }else if(kode == "E"){
        harga = 2000;
    }else{
        harga = 0;
    }

    return harga;
}

void task11(){
    cout << "\nMenghitung jumlah pembayaran dari 2 pilihan paket makanan dan minuman yang dipilih. Jika jumlah biaya lebih dari Rp. 20.000,- maka mendapatkan potongan Rp. 2.000,-.\n";

    int ayam, lele, nasgor, jusbuah, tehmanis, hasil, harga1, harga2;
    string kodepaket1, kodepaket2;

    cout << "KODE ==== Menu ========== Harga" << endl;
    cout << " A     Ayam Penyet      Rp. 15 000" << endl;
    cout << " B     Pecel Lele       Rp. 12 000" << endl;
    cout << " C     Nasi Gorang      Rp. 10 000" << endl;
    cout << " D     Jus BUah         Rp.  8 000" << endl;
    cout << " E     Teh Manis        Rp.  2 000" << endl;

    cout << "Isi kode paket pertama : "; cin >> kodepaket1;
    cout << "Isi kode paket kedua : "; cin >> kodepaket2;

    harga1 = cekKodePaket(kodepaket1);
    harga2 = cekKodePaket(kodepaket2);

    hasil = harga1 + harga2;

    if(hasil > 20000){
        cout << "Anda mendapat diskon sebesar : Rp. 2000" << endl;
        cout << "Harus bayar sebelum diskon: Rp. " << hasil << endl;
        hasil = hasil - 2000;
        cout << "Total pembayaran setelah diskon adalah : Rp. " << hasil;
    }else{
        cout << "Total pembayaran adalah : Rp. " << hasil;
    }



}


void task10(){
    cout << "\nMenentukan Nilai Akhir dan Nilai Index dari nilai hasil tugas, UTS dan UAS mata kuliah\n";
    float tugas, uts, uas, hasil;
    cout << "Masukan nilai TUGAS : "; cin >> tugas;
    cout << "Masukan nilai UTS : "; cin >> uts;
    cout << "Masukan nilai UAS : "; cin >> uas;
    hasil = (0.2 * tugas) + (0.3 * uts) + (0.5 * uas);
    if(hasil >= 80){
        cout << "Hasil adalah : " << hasil << " dengan index A";
    }else if(hasil >= 68 && hasil <= 80){
        cout << "Hasil adalah : " << hasil << " dengan index B";
    }else if(hasil >= 56 && hasil <= 68){
        cout << "Hasil adalah : " << hasil << " dengan index C";
    }else if(hasil >= 45 && hasil <= 56){
        cout << "Hasil adalah : " << hasil << " dengan index D";
    }else if(hasil >=0 && hasil <= 45 ){
        cout << "Hasil adalah : " << hasil << " dengan index E";
    }
}

string satuan(int a){
    string nilai;
    switch(a){
    case 1:
        nilai = "satu";
        break;
    case 2:
        nilai = "dua";
        break;
    case 3:
        nilai = "tiga";
        break;
    case 4:
        nilai = "empat";
        break;
    case 5:
        nilai = "lima";
        break;
    case 6:
        nilai = "enam";
        break;
    case 7:
        nilai = "tujuh";
        break;
    case 8:
        nilai = "delapan";
        break;
    case 9:
        nilai = "sembilan";
        break;
    case 10:
        nilai = "sepuluh";
        break;
    case 11:
        nilai = "sebelas";
        break;
    case 100:
        nilai = "seratus ";
        break;
    case 1000:
        nilai = "seribu ";
        break;
    default:
        nilai = "";
        break;
    }

    return nilai;
}

void cekNilai(int a){
    if(a <= 11){
        cout << satuan(a);
    }else if(a > 11 && a <= 19){
        cekNilai(a%10);
        cout << " belas ";
    }else if(a > 19 && a <= 99){
        cekNilai(a/10);
        cout << " puluh ";
        cekNilai(a%10);
    }else if(a > 99 && a <= 199){
        cout << "seratus ";
        cekNilai(a%100);
    }else if(a > 199 && a <= 999){
        cekNilai(a/100);
        cout << " ratus ";
        cekNilai(a%100);
    }else if(a > 999 && a <= 1999){
        cout << "seribu ";
        cekNilai(a%1000);
    }else if(a > 1999 && a <= 999999){
        cekNilai(a/1000);
        cout << " ribu ";
        cekNilai(a%1000);
    }else{
        cout << "Masukan angka di bawah 999.999";
    }
}


void task9(){
    cout << "\nMenentukan nilai terbilang dari angka\n";
    int angka;
    cout << endl;
    cout << "Masukan angka : "; cin >> angka;
    cekNilai(angka);
}


void task8(){
    cout << "\nMenentukan bunyi sila dari nomor sila pancasila\n";

    int sila;
    string pernyataan;

    cout << "Masukan nomor sila : "; cin >> sila;

    switch(sila){
    case 1:
        pernyataan = "Ketuhanan yang maha esa";
        break;
    case 2:
        pernyataan = "Kemanusiaan yang adil dan beradab";
        break;
    case 3:
        pernyataan = "Persatuan Indonesia";
        break;
    case 4:
        pernyataan = "Kerakyatan yang di pimpim oleh hikmat kebijaksanaan dalam permusyawaratan perwakilan";
        break;
    case 5:
        pernyataan = "Keadilan sosial bagi seluruh warga indonesia";
        break;
    default:
        cout << "Pancasila hanya ada 5";
        break;
    }

    cout << "Sila ke : " << sila << " adalah " << pernyataan;
}


void task7(){
    cout << "\nMenentukan hari\n";

    int angka;

    cout << "Masukan angka untuk hari : "; cin >> angka;

    switch(angka){
    case 1:
        cout << angka << " adalah hari MINGGU";
        break;
    case 2:
        cout << angka << " adalah hari SENIN";
        break;
    case 3:
        cout << angka << " adalah hari SELASA";
        break;
    case 4:
        cout << angka << " adalah hari RABU";
        break;
    case 5:
        cout << angka << " adalah hari KAMIS";
        break;
    case 6:
        cout << angka << " adalah hari JUMAT";
        break;
    case 7:
        cout << angka << " adalah hari SABTU";
        break;
    default:
        cout << "angka hari yang anda masukan salah";
        break;

    }
}


void task6(){
    cout << "\nProgram menentukan bilangan prima atau bukan\n";
    int bil1, bil2, bil3;

    cout << "Inputkan bilangan 1 : "; cin >> bil1;
    cout << "Inputkan bilangan 2 : "; cin >> bil2;
    cout << "Inputkan bilangan 3 : "; cin >> bil3;

    if(bil1 > bil2){
       if(bil2 > bil3){
            cout << "nilai maksimum adalah : " << bil1 << endl;
            cout << "nilai minimum adalah : " << bil3 << endl;
       }else{
            cout << "nilai maksimum adalah : " << bil3 << endl;
            cout << "nilai minimum adalah : " << bil2 << endl;
       }
    }else{
       if(bil1 > bil3){
            cout << "nilai maksimum adalah : " << bil2 << endl;
            cout << "nilai minimum adalah : " << bil3 << endl;
       }else{
            cout << "nilai maksimum adalah : " << bil3 << endl;
            cout << "nilai minimum adalah : " << bil1 << endl;
       }
    }
}


void task5(){
    cout << "\nMenentukan nilai maksimum dari 2 bilangan\n";
    int bil1, bil2;

    cout << "Inputkan bilangan 1 : "; cin >> bil1;
    cout << "Inputkan bilangan 2 : "; cin >> bil2;

    if(bil1 > bil2){
       cout << "nilai maksimum adalah : " << bil1 << endl;
       cout << "nilai minimum adalah : " << bil2 << endl;
    }else{
       cout << "nilai maksimum adalah : " << bil2 << endl;
       cout << "nilai minimum adalah : " << bil1 << endl;
    }
}


void task4(){
    cout << "\nMemvalidasi username atau password\n";
    string username, password;

    cout << "Inputkan username : "; cin >> username;
    cout << "Inputkan password : "; cin >> password;

    if(username == "dizzay23" && password == "123"){
        cout << "Berhasil login, username anda : " << username;
    }else{
        cout << "username atau password salah";
    }
}


void task3(){
    cout << "\nProgram menentukan bilangan prima atau bukan\n";

    int angka, prima;
    string pernyataan;

    cout << "Masukan bilangan : "; cin >> angka;

    prima = 0;

    for(int i=1; i <= angka; i++){
        if(angka%i == 0){
                prima++;
        }
    }

    if(prima == 2){
        pernyataan = "Bilangan Prima";
    }else{
        pernyataan = "Bukan Bilangan Prima";
    }

    cout << pernyataan;
}


void task2(){
    cout << "\nProgram menentukan bilangan ganjil atau genap\n";

    int angka;
    string pernyataan;

    cout << "Masukan bilangan : "; cin >> angka;
    if(angka % 2 == 0){
        pernyataan = "Genap";
    }else{
        pernyataan = "Ganjil";
    }

    cout << pernyataan;
}

void task1(){
    cout << "\nProgram menentukan bilangan positif atau negatif\n";

    int angka;
    string pernyataan;

    cout << "Masukan bilangan : "; cin >> angka;
    if(angka > 0){
        pernyataan = "Positif";
    }else{
        pernyataan = "Negatif";
    }

    cout << pernyataan;
}

void pilihMethod(int pilihan){
    switch(pilihan){
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    case 4:
        task4();
        break;
    case 5:
        task5();
        break;
    case 6:
        task6();
        break;
    case 7:
        task7();
        break;
    case 8:
        task8();
        break;
    case 9:
        task9();
        break;
    case 10:
        task10();
        break;
    case 11:
        task11();
        break;
    case 12:
        task12();
        break;
    default:

        break;

    }
}

int main()
{
    int pilih;
    cout << "Masukan program yang dipilih : "; cin >> pilih;
    pilihMethod(pilih);
    return 0;
}
