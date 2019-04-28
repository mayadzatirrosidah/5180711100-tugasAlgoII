#include<iostream>
#include<conio.h>

using namespace::std;

main()
{
    int A[10];
    int i,j,nilai,data,baru,a,b,c,d,k;
    cout<<"\nberapa jumlah data : ";cin>>data;
    for (i=0;i<data;i++)
    {
        cout<<"\ndata ke-"<<i<<" = ";
        cin>>A[i];
    }
    cout<<endl;

    cout<<"\nmasukkan data yang ingin dicari = ";
    cin>>nilai;

    for (j=0;j<data;j++)
    {
        if(A[j]==nilai)
        {
            cout<<"nilai yang dicari pada data ke-"<<j;
        }
    }

    cout<<"\nmasukkan data yang ingin diganti = ";
    cin>>c;
    cout<<"\nmasukkan data pengganti = ";
    cin>>baru;
    a = c;
    A[a] = baru;
    cout<<"\ndata yang baru = "<<endl;

    for(b=0;b<data;b++)
    {
        cout<<"data"<<b<<" = "<<A[b]<<endl;
    }

    cout<<"masukkan data yang ingin dihapus = ";
    cin>>d;
    i = d;
    cout<<"\nnilai yang dihapus";
    cout<<A[i]<<"pada data ke-"<<i<<endl;
    cout<<"\ndata akhir"<<endl;

    for (j=d;j<data;j++)
    {
        A[i] = A[j+1];
    }

    for (k=0;k<data-1;k++)
    {
        cout<<"\ndata"<<k<<" = "<<A[k];
    }
}
