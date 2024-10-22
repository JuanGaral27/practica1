#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;
int main(){
int x;
string nombre;
int cedula;
string correo;
ofstream output("./practica1/Data/data.txt");
if(!output.is_open()){
    cout<<"el documento no se pudo crear"<<endl;
    return 0;
}
cout<<"ingrese la cantidad de datos que desea ingresar"<<endl;
cin>>x;
while(x>0){
    cout<<"ingrese su nombre"<<endl;
    cin>>nombre;
cout<<"ingrese su cedula"<<endl;
cin>>cedula;
cout<<"ingrese su correo"<<endl;
cin>>correo;
output<<nombre<<" "<<correo<<" "<<cedula<<endl;
x--;
}
}