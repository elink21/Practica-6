#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numero;
    cout<<"Ingrese el numero de la tabla a generar: ";
    cin>>numero;
    for(int i=0;i<=20;i++)
    {
        cout<<i<<"x"<<numero<<"="<<i*numero<<"\n";
    }
    string stop;
    cout<<"\n\n\n --> Programa finalizado , inserte cualquier caracter para terminar <--\n";
    cin>>stop;
    return 0;
}
