#include<iostream>
#include<conio.h>
using namespace::std;

void belanja()
{
    int brpbrg,jmlbrg,hrgbrg,ttlhrg,totalsemua=0;
    string nmbrg;
    cout<<"Berapa Barang    :";
    cin>>brpbrg;
    for(int i=1;i<=brpbrg;i++)
    {
        cout<<"\n*****BARANG KE-"<<i<<"*****"<<endl;
        cout<<"Nama Barang     : ";
        cin>>nmbrg;
        cout<<"Jumlah Barang   : ";
        cin>>jmlbrg;
        cout<<"Harga Barang    : Rp.";
        cin>>hrgbrg;
        ttlhrg=jmlbrg*hrgbrg;
        cout<<"Total Harga     : Rp."<<ttlhrg<<endl;
        totalsemua=totalsemua+ttlhrg;
    }
    cout<<"\n***Total Akhir     : Rp."<<totalsemua<<"***"<<endl;
}

void diskon()
{
    float disc,totalsemua,totalakhir,ttlhrg;
    cout<<"\n*******Anda Mendapatkan Diskon 5%*******"<<endl;
    totalsemua=totalsemua+ttlhrg;
    disc=totalsemua*0.05;
    totalakhir=totalsemua-disc;
    cout<<"Setelah Diskon 5% : "<<totalakhir<<endl;
}

void identitas()
{
    string nomor[5]={"A001","A003","A007","A008"};
    string nama[5]={"Bayu","Irvan","Susiati","Diana","Roni",};
    string namaku,cari;
    int indeks,jum=5;
    cout<<"Masukkan No. ID  : ";
    cin>>cari;
    for(int i=0;i<jum;i++)
    {
        if(cari==nomor[i])
        {
            namaku=nama[i];
        }
    }
    cout<<"***ANDA ADALAH MEMBER***"<<endl;
    cout<<"No. ID       : "<<cari<<endl;
    cout<<"Nama Anda    : "<<namaku<<endl;
}

main()
{
    string mbr,nm;
    float totalsemua;
    cout<<"apakah anda member? (y/t) ";
    cin>>mbr;
    if(mbr=="t")
    {
        cout<<"Nama Anda    : ";
        cin>>nm;
        belanja();
    }
    else
    {
        identitas();
        belanja();
        diskon();
    }
}
