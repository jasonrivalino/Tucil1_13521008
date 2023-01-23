#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

// Fungsi untuk kalkulasi operasi
double calculation (double num1Int, double num2Int, int operators){
    if (operators == 1){
        return num1Int + num2Int;
    }
    if (operators == 2){
        return num1Int - num2Int;
    }
    if (operators == 3){
        return num1Int * num2Int;
    }
    if (operators == 4){
        return num1Int / num2Int;
    }
}

// Fungsi untuk menentukan operator
char op (int operators){
    if (operators == 1){
        return '+';
    }
    if (operators == 2){
        return '-';
    }
    if (operators == 3){
        return '*';
    }
    if (operators == 4){
        return '/';
    }
}