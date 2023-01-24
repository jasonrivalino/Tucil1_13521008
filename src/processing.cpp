#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <ctime>
#include <climits>
#include "inputing.cpp"
#include "operation.cpp"
using namespace std;


string hasilOperasi[1000]; // Untuk menyimpan hasil akhir operasi
int nums1[25], nums2[25], nums3[25], nums4[25]; // Untuk menyimpan angka-angka yang akan dicari hasilnya
int neff = 0;
int counts = 0;

// Fungsi untuk melakukan pertukaran
void swap (int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// Fungsi untuk melakukan permutasi dan menyimpan hasilnya ke dalam array
void permutation (int *cards, int start, int end){
  if (start == end){
    neff++;
    nums1[neff] = cards[0];
    nums2[neff] = cards[1];
    nums3[neff] = cards[2];
    nums4[neff] = cards[3];
  } 
  else{
    for (int i = start; i <= end; i++){
        swap((cards+start), (cards+i));
        permutation(cards, start+1, end);
        swap((cards+start), (cards+i));
    }
  }
}

// Fungsi untuk mencari solusi dengan menggunakan Brute Force
void search24 (int a, int b, int c, int d){
  int i, j, k;
  float calc1, calc2;
  float numHasil;
  for (i = 1; i <= 4; i++){
    for (j = 1; j <= 4; j++){
      for (k = 1; k <= 4; k++){

        // Pengecekan segala kemungkinan operasi yang dapat dilakukan

        // (w op x) op (y op z)
        calc1= calculation((float)a, (float)b, i);
        calc2= calculation((float)c, (float)d, k);
        numHasil= calculation(calc1, calc2, j);
        if (numHasil == 24){
          counts++;
          hasilOperasi[counts] = "(" + to_string(a) + " " + op(i) + " " + to_string(b) + ") " + op(j) + " (" + to_string(c) + " " + op(k) + " " + to_string(d) + ")";
          cout << hasilOperasi[counts] << endl;
        }

        // ((w op x) op y) op z
        calc1= calculation((float)a, (float)b, i);
        calc2= calculation(calc1, (float)c, j);
        numHasil= calculation(calc2, (float)d, k);
        if (numHasil == 24){
          counts++;
          hasilOperasi[counts] = "((" + to_string(a) + " " + op(i) + " " + to_string(b) + ") " + op(j) + " " + to_string(c) + ") " + op(k) + " " + to_string(d);
          cout << hasilOperasi[counts] << endl;
        }

        // (w op (x op y)) op z
        calc1= calculation((float)b, (float)c, j);
        calc2= calculation((float)a, calc1, i);
        numHasil= calculation(calc2, (float)d, k);
        if (numHasil == 24){
          counts++;
          hasilOperasi[counts] = "(" + to_string(a) + " " + op(i) + " (" + to_string(b) + " " + op(j) + " " + to_string(c) + ")) " + op(k) + " " + to_string(d);
          cout << hasilOperasi[counts] << endl;
        }

        // w op ((x op y) op z)
        calc1= calculation((float)b, (float)c, j);
        calc2= calculation(calc1, (float)d, k);
        numHasil= calculation((float)a, calc2, i);
        if (numHasil == 24){
          counts++;
          hasilOperasi[counts] = to_string(a) + " " + op(i) + " ((" + to_string(b) + " " + op(j) + " " + to_string(c) + ") " + op(k) + " " + to_string(d) + ")";
          cout << hasilOperasi[counts] << endl;
        }

        // w op (x op (y op z))
        calc1= calculation((float)c, (float)d, k);
        calc2= calculation((float)b, calc1, j);
        numHasil= calculation((float)a, calc2, i);
        if (numHasil == 24){
          counts++;
          hasilOperasi[counts] = to_string(a) + " " + op(i) + " (" + to_string(b) + " " + op(j) + " (" + to_string(c) + " " + op(k) + " " + to_string(d) + "))";
          cout << hasilOperasi[counts] << endl;
        }
      }
    }
  }
}