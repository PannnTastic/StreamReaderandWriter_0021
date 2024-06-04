#include <iostream>
using namespace std;

int main (){
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY\n";
        cout << "Pernyataan tidak akan d eksekusi\n";
    }
    catch(int a)
    {
        cout << "Pengecualian akan d eksekusi\n";
    }
    catch(...){
        cout << "Default pengecualian d eksekusi\n";
    }
    
}