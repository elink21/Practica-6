#include <bits/stdc++.h>
using namespace std;

int main()
{
    int entero1,entero2,aux;
    cout<<"Inserte el valor para el primer numero: ";
    cin>>entero1;
    cout<<"Inserte el valor para el segundo numero: ";
    cin>>entero2;
    aux=entero1;
    entero1=entero2;
    entero2=aux;

    cout<<"\n\nAhora la primer variable vale: "<<entero1<<"\n";
    cout<<"Y la segunda variable vale: "<<entero2<<"\n";
    string stop;
    cout<<"\n\n\n --> Programa finalizado , inserte cualquier caracter para terminar <--\n";
    cin>>stop;
    return 0;
}
