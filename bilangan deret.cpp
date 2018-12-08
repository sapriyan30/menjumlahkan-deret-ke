#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a=0, b, c, jumlah=0, i, n;
    cout<<"masukan bilangan awal :  ";
    cin>>a;
    cout<<"masukan beda : ";
    cin>>b;
    cout<<"masukan jumlah sampai deret ke-n: ";
    cin>>n;

    cout<<"deret ke-"<<n<<" :";
    cout<<a<<",";
    jumlah=jumlah+a;
    for (i=0; i<n-1; i++){
        c=a+b;
        a=c;
        cout<<c<<",";
        jumlah=jumlah+c;
    }
    cout<<"\njumlah deret ke-"<<n<<" : ";
    cout<<jumlah;

    return 0;
}
