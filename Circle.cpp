#include <bits/stdc++.h>
using namespace std;

const double Phi = 3.1416;

double hitung(int xp, int yp, int xt, int yt){

    double x = sqrt(pow(xp-xt,2)+pow(yp-yt,2));

    return x;
}

int main(){

    int x1, y1, x2, y2, n; cout<<"Berapa kali operasi? "; cin>>n;
    short i = 1;

    while(n--){

        cout<<"Input ke-"<<i<<endl;
        cout<<"Masukkan kordinat pusat lingkaran"<<endl<<"x = "; cin>>x1; cout<<"y = "; cin>>y1;

        cout<<"Masukkan kordinat titik pada lingkaran"<<endl<<"x = "; cin>>x2; cout<<"y = "; cin>>y2;

        double r = hitung(x1, y1, x2, y2);

        double keliling = 2 * Phi * r;

        double area = Phi * pow(r,2);

        cout<<"Distance : "<<r<<endl;
        cout<<"Radius   : "<<r<<endl;
        cout<<"Keliling : "<<keliling<<endl;
        cout<<"Luas     : "<<area<<endl;
        i++;
        
    }

}