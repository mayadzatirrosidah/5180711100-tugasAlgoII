#include <iostream>

using namespace::std;

float modul(float angka,float mod)
{
    if (mod==0)
        return 1;
    else
        return angka/modul(angka,mod-1);
}

main()
{
    float angka,mod;
    cout<<"masukkan angka   : ";
    cin>>angka;
    cout<<"masukkan modulus : ";
    cin>>mod;
    cout<<"hasil modulus    : "<<modul(angka,mod);
}
