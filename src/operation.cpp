#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Fungsi untuk kalkulasi operasi
double calculation (double num1Int, double num2Int, int operators){
    double hasil;
    if (operators == 1){
        hasil = num1Int + num2Int;
    }
    if (operators == 2){
        hasil = num1Int - num2Int;
    }
    if (operators == 3){
        hasil = num1Int * num2Int;
    }
    if (operators == 4){
        hasil = num1Int / num2Int;
    }
    return hasil;
}

// Fungsi untuk menentukan operator
string op (int operators){
    string opr;
    if (operators == 1){
        opr = "+";
    }
    if (operators == 2){
        opr = "-";
    }
    if (operators == 3){
        opr = "*";
    }
    if (operators == 4){
        opr = "/";
    }
    return opr;
}