#include <iostream>
#include <cstdlib>
#include "splash.cpp"
#include "save.cpp"
using namespace std;

int main(){
    // Menampilkan splash screen dan menu pemilihan metode
    splashScreenOpening();
    cout << ("Silahkan memilih metode yang ingin digunakan: ") << endl;
    cout << ("1. Memasukkan angka kartu sendiri secara manual") << endl;
    cout << ("2. Memilih angka kartu secara acak (Randomize Number)") << endl;
    cout << ("Masukkan pilihan anda: ");
    int pilihan;
    cin >> pilihan;
    while (pilihan != 1 && pilihan != 2){
        cout << ("Masukkan pilihan anda: ");
        cin >> pilihan;
    }

    // Kondisi jika memilih metode manual
    if (pilihan == 1){
        cout << endl;
        inputNumber();
    } 

    // Kondisi jika memilih metode random
    else if (pilihan == 2){
        cout << endl;
        random();
    }

    cout << endl;

    // Melakukan proses pencarian solusi
    cout << "Proses pencarian solusi..." << endl;
    clock_t start = clock();

    // Mencari solusi dengan cara permutasi
    permutation(cards, 0, 3);

    // Mencetak solusi yang didapat
    cout << endl << "Solusi yang didapat adalah: " << endl;
    int i;
    for (i = 1; i <= neff; i++){
        search24(nums1[i], nums2[i], nums3[i], nums4[i]);
    }

    // Mencetak jumlah solusi yang dihasilkan
    if (counts == 0){
        cout << endl << "No Solutions Found" << endl;
    }
    else if (counts == 1){
        cout << endl << "1 Solution Found" << endl;
    }
    else{
        cout << endl << counts << " Solutions Found" << endl;
    }

    printf("Time Execution: %.3f seconds\n", (float)(clock() - start)/CLOCKS_PER_SEC);

    cout << endl;
    string choose;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;

    // Opsi untuk menyimpan hasil ke dalam file
    cout << "Apakah anda ingin menyimpan hasil ke dalam file? (y/n): ";
    cin >> choose;
    while (choose != "y" && choose != "n"){
        cout << "Apakah anda ingin menyimpan hasil ke dalam file? (y/n): ";
        cin >> choose;
    }

    if (choose == "y"){
        saveFile();
    }
    
    cout << endl;
    splashScreenClosing();
    return 0;
}