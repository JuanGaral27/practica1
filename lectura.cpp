#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    ifstream lectura("./Data/data.txt"); 

    if (!lectura.is_open()) { 
        cerr << "No se pudo abrir el lectura." << endl;
        return 1; 
    }

    string nombre, cedula, correo;
    string linea;

    
    while (getline(lectura, linea, '\n')) {
        cout<<"Mi nombre, cedula y correo son: "<<linea<<endl;
    }
    lectura.close();
    return 0;
}
