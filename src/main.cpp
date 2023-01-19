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

int stringToInt (string card) {
    if (card == "A") {
        return 1;
    } 
    if (card == "J") {
        return 11;
    }
    if (card == "Q") {
        return 12;
    }
    if (card == "K") {
        return 13;
    }
    else {
        return stoi(card);
    }
}

void inputNumber() {
    cout << "Masukkan angka-angkanya: ";
    cin >> num1 >> num2 >> num3 >> num4;
    while (!(checkingCard(num1) && checkingCard(num2) && checkingCard(num3) && checkingCard(num4))) {
        cout << "Masukkan angka-angkanya: ";
        cin >> num1 >> num2 >> num3 >> num4;
    }
    cout << "Angka-angka yang didapat adalah: ";
    cout << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
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