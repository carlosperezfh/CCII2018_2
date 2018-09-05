#include <iostream>
#include <cstring>

using namespace std;

int mostrarC(int d, int m, int a, int M[12]){
    string meses[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    cout<<"\n\n   "<<meses[m-1]<<" - "<<a;
    cout<<"\n\n   Do    Lu    Ma    Mi    Ju    Vi    Sa\n   ";

    if(a%4==0){M[1]=29;}
    for(int i=1; i<d; ++i){
        cout<<"      ";}

    for(int j=1; j<=M[m-1]; ++j){
        if(j<10){cout<<"0";}
        cout<<j<<"    ";
        if((d+j-1)%7==0){cout<<"\n   ";}}

    cout<<"\n\n";
    return 0;
}

int primerDia(int a){
    int x=a-1000;
    int y=x/4;
    x=x+y;
    int z=x%7;
    return z;
}

int main()
{
    int m, a;
    cout<<"\n MM/YY :\n";
    cin>>m>>a;
    int meses[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int d1000[12]={3,6,7,3,5,1,3,6,2,4,7,2};
    int d=(primerDia(a)+d1000[m-1])%7;

    if(m==2 && a%4!=0){d=d+1;}

    mostrarC(d, m, a, meses);
    return 0;
}
