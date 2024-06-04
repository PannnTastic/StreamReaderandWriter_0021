#include <iostream>
using namespace std;

int main (){
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY\n";
        // throw 0.5; melemparkan sebuah int maka
        cout << "Pernyataan tidak akan d eksekusi\n";
    }
    catch(int a)
    {
        // blok ini akan d eksekusi
        cout << "Pengecualian akan d eksekusi\n";
    }
    catch(...){
        // jika selain int maka blok ini akan d eksekusi
        cout << "Default pengecualian d eksekusi\n";
    }
    
}