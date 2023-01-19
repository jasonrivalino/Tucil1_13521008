#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;

int e[25], f[25], g[25], h[25];
int Neff = 0;

string num1, num2, num3, num4;

bool checkingCard(string card) {
    return (card == "A") || (card == "2") || (card == "3") || (card == "4") || (card == "5") || (card == "6") || 
    (card == "7") || (card == "8") || (card == "9") || (card == "10") || (card == "J") || (card == "Q") || (card == "K");
}

void inputNumber() {
    cout << "Masukkan angka-angkanya: ";
    cin >> num1 >> num2 >> num3 >> num4;
    while (!(checkingCard(num1) && checkingCard(num2) && checkingCard(num3) && checkingCard(num4))) {
        cout << "Masukkan angka-angkanya: ";
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

    int num1Int = stoi(num1);
    int num2Int = stoi(num2);
    int num3Int = stoi(num3);
    int num4Int = stoi(num4);

    cout << "Angka-angka yang didapat adalah: ";
    cout << num1Int << " " << num2Int << " " << num3Int << " " << num4Int << endl;
    cout << num1Int + num2Int + num3Int + num4Int << endl;
}

void random(){
    int random1, random2, random3, random4;
    srand(time(NULL));
    random1 = rand() % 13 + 1;
    random2 = rand() % 13 + 1;
    random3 = rand() % 13 + 1;
    random4 = rand() % 13 + 1;
    cout << "Angka-angka yang didapat adalah: ";
    cout << random1 << " " << random2 << " " << random3 << " " << random4 << endl;
    cout << random1 + random2 + random3 + random4 << endl;
}

int main(){
    int pilihan;
    cout << ("Selamat datang di program permainan kartu 24") << endl;
    cout << ("Silahkan memilih metode yang ingin digunakan: ") << endl;
    cout << ("1. Memasukkan angka sendiri secara manual") << endl;
    cout << ("2. Memasukkan angka secara acak") << endl;
    cout << ("Masukkan pilihan anda: ") << endl;
    cin >> pilihan;
    while (pilihan != 1 && pilihan != 2){
        cout << ("Masukkan pilihan anda: ") << endl;
        cin >> pilihan;
    }
    if (pilihan == 1){
        inputNumber();
    } 
    else if (pilihan == 2){
        random();
    }
}