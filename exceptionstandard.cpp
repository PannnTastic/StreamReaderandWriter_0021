#include <exception>
#include <iostream>
#include <array>

using namespace std;

int main (){
    cout << "Awal Program" << endl;
    try
    {
        array<int, 3> data = {6, 7, 8};
        cout << data.at(5) << endl;
    }
    catch(exception& e)
    {
        cout << e.what() << '\n';
    }
    cout << "Baris Program Akhir\n";
    
}