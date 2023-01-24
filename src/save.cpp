#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "processing.cpp"
using namespace std;


// Fungsi untuk menyimpan hasil operasi ke dalam file
void saveFile(){
    string namaFile;
    cout << "Masukkan nama file: ";
    cin >> namaFile;
    ofstream myfile("../test/" + namaFile + ".txt");
    myfile << "Angka-angka yang akan dicari hasilnya adalah: ";
    myfile << num1Int << " " << num2Int << " " << num3Int << " " << num4Int << endl;
    myfile << endl;
    myfile << "Solusi yang didapat adalah: " << endl;
    for (int i = 1; i <= counts; i++){
        myfile << hasilOperasi[i] << endl;
    }
    myfile << endl;
    if (counts == 0){
        myfile << "No Solutions Found" << endl;
    }
    else if (counts == 1){
        myfile << "1 Solution Found" << endl;
    }
    else{
        myfile << counts << " Solutions Found" << endl;
    }
}