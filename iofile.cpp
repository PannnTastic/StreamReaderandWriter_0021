#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main (){
    string baris;

    ofstream outfile;

    outfile.open("contoh.txt");

    cout <<">= Menulis File, \'q\' untuk keluar" << endl;

    while (true){
        cout << "- ";
        getline (cin , baris);
        if(baris == "q") break;
        outfile << baris << endl;
    }
    outfile.close();
}