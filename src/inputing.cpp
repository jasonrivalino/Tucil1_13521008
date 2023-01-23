#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>
#include <climits>
using namespace std;

string num1, num2, num3, num4;
int num1Int, num2Int, num3Int, num4Int;

// Fungsi untuk mengecek apakah inputan valid
bool checkingCard(string card) {
    return (card == "A") || (card == "2") || (card == "3") || (card == "4") || (card == "5") || (card == "6") || 
    (card == "7") || (card == "8") || (card == "9") || (card == "10") || (card == "J") || (card == "Q") || (card == "K");
}

// Fungsi opsi pertama untuk menginput angka secara manual
void inputNumber() {
    cout << "--------------------------------------------" << endl;
    cout << "Masukkan kartu yang ingin dicari nilai 24nya" << endl;
    cout << "Format input: angka1 angka2 angka3 angka4" << endl;
    cout << "Contoh: A 2 3 4" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Input kartu: ";
    cin >> num1 >> num2 >> num3 >> num4;
    while (!(checkingCard(num1) && checkingCard(num2) && checkingCard(num3) && checkingCard(num4))) {
        cout << "Input kartu: ";
        cin >> num1 >> num2 >> num3 >> num4;
    }
    if (num1 == "A"){
        num1 = "1";}
    if (num2 == "A"){
        num2 = "1";}
    if (num3 == "A"){
        num3 = "1";}
    if (num4 == "A"){
        num4 = "1";}
    if (num1 == "J"){
        num1 = "11";}
    if (num2 == "J"){
        num2 = "11";}
    if (num3 == "J"){
        num3 = "11";}
    if (num4 == "J"){
        num4 = "11";}
    if (num1 == "Q"){
        num1 = "12";}
    if (num2 == "Q"){
        num2 = "12";}
    if (num3 == "Q"){
        num3 = "12";}
    if (num4 == "Q"){
        num4 = "12";}
    if (num1 == "K"){
        num1 = "13";}
    if (num2 == "K"){
        num2 = "13";}
    if (num3 == "K"){
        num3 = "13";}
    if (num4 == "K"){
        num4 = "13";}

    num1Int = stoi(num1);
    num2Int = stoi(num2);
    num3Int = stoi(num3);
    num4Int = stoi(num4);

    cout << "Angka-angka yang akan dicari hasilnya adalah: ";
    cout << num1Int << " " << num2Int << " " << num3Int << " " << num4Int << endl;
    // cout << num1Int + num2Int + num3Int + num4Int << endl;
}

// Fungsi opsi kedua untuk menginput angka secara random
void random(){
    srand(time(NULL));
    num1Int = rand() % 13 + 1;
    num2Int = rand() % 13 + 1;
    num3Int = rand() % 13 + 1;
    num4Int = rand() % 13 + 1;
    cout << "Angka-angka yang akan dicari hasilnya adalah: ";
    cout << num1Int << " " << num2Int << " " << num3Int << " " << num4Int << endl;
    // cout << num1Int + num2Int + num3Int + num4Int << endl;
}