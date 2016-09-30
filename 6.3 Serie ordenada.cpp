#include <bits/stdc++.h>
using namespace std;

int entero1=0,entero2=0,entero3=0;

int main()
{
    cout<<"Inserte el entero 1:";
    cin>>entero1;
    cout<<"Inserte el entero 2:";
    cin>>entero2;
    cout<<"Inserte el entero 3:";
    cin>>entero3;

    cout<<"El orden de los enteros es:\n ";
    if(entero1<=entero2 && entero1<=entero3)
    {
        cout<<entero1;
        if(entero2<entero3)
        {
            cout<<"->"<<entero2<<"->"<<entero3;
        }
        else{
            cout<<"->"<<entero3<<"->"<<entero2;
        }
    }
    else if(entero2<=entero1 && entero2<=entero3)
    {
        cout<<entero2;
        if(entero1<entero3)
        {
            cout<<"->"<<entero1<<"->"<<entero3;
        }
        else{
            cout<<"->"<<entero3<<"->"<<entero1;
        }
    }
    else if(entero3<=entero2 && entero3<=entero1)
    {
        cout<<entero3;
        if(entero1<entero2)
        {
            cout<<"->"<<entero1<<"->"<<entero2;
        }
        else{
            cout<<"->"<<entero2<<"->"<<entero1;
        }
    }

    string stop;
    cout<<"\n\n\n --> Programa finalizado , inserte cualquier caracter para terminar <--\n";
    cin>>stop;

    return 0;

}
