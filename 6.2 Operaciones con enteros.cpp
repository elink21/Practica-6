#include <bits/stdc++.h>
using namespace std;

int main()
{

    int variableEntera1=0,variableEntera2=0;

    cout<<"Inserte el primer numero entero: ";
    cin>>variableEntera1;
    cout<<"Inserte el segundo numero entero: ";
    cin>>variableEntera2;
    if(variableEntera1==variableEntera2)cout<<"Son iguales\n";
     else if(variableEntera1>variableEntera2){cout<<"El mayor es "<<variableEntera1<<"\n";}
    else{cout<<"El mayor es "<<variableEntera2<<"\n";}
    cout<<"Las operaciones con enteros que se pueden realizar son:\n";
    cout<<"\n(suma)-> "<<variableEntera1<<"+"<<variableEntera2<<"="<<variableEntera1+variableEntera2;
    cout<<"\n(resta)->"<<variableEntera1<<"-"<<variableEntera2<<"="<<variableEntera1-variableEntera2;
    cout<<"\n(multiplicacion)->"<<variableEntera1<<"x"<<variableEntera2<<"="<<variableEntera1*variableEntera2;
    cout<<"\n(division)->"<<variableEntera1<<"/"<<variableEntera2<<"="<<variableEntera1/variableEntera2;
    cout<<"\n(modulo)->"<<variableEntera1<<"%"<<variableEntera2<<"="<<variableEntera1%variableEntera2<<"\n";

    string stop;
    cout<<"\n\n\n --> Programa finalizado , inserte cualquier caracter para terminar <--\n";
    cin>>stop;
    return 0;

}
