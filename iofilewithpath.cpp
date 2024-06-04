#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string baris;
    string namafile;

    cout << "Masukkan Nama File : ";
    cin >> namafile;

    ofstream outfile;
    outfile.open(namafile + ".txt" , ios::out);
}