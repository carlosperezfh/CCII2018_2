#include <iostream>

using namespace std;

int suma(int o[3]){
    int x=o[1]+o[2];
    cout<<"\n\n( "<<o[1]<<" + "<<o[2]<<" ) mod "<<o[0]<<" = ";
    cout<<x<<" mod "<<o[0];
    cout<<"\n = "<<x%o[0]<<" mod "<<o[0]<<"\n";
    if(x%o[0]<0){cout<<" = "<<o[0]+(x%o[0]);}
    cout<<"\n";
    return 0;
}

int resta(int o[3]){
    int x=o[1]-o[2];
    cout<<"\n\n( "<<o[1]<<" - "<<o[2]<<" ) mod "<<o[0]<<" = ";
    cout<<x<<" mod "<<o[0]<<"\n";
    cout<<"\n = "<<x%o[0]<<" mod "<<o[0]<<"\n";
    if(x%o[0]<0){cout<<" = "<<o[0]+(x%o[0]);}
    cout<<"\n";
    return 0;
}

int multipl(int o[3]){
    int x=o[1]*o[2];
    cout<<"\n\n( "<<o[1]<<" * "<<o[2]<<" ) mod "<<o[0]<<" = ";
    cout<<x<<" mod "<<o[0];
    cout<<"\n = "<<x%o[0]<<" mod "<<o[0]<<"\n";
    if(x%o[0]<0){cout<<" = "<<o[0]+(x%o[0]);}
    cout<<"\n";
    return 0;
}

int euclides(int a, int b){
    int mod=a;
    std::cout<<"\n\nEl inverso multiplicativo modular de "<<b<<" mod "<<a;
    int s=1; int t=0;
    int _s=0; int _t=1;
    while(b!=0){
        int q = a/b;
        int r = a%b;

        a=b;
        int stemp=s;
        s=_s;
        int ttemp=t;
        t=_t;
        b=r;
        _s=stemp-(_s*q);
        _t=ttemp-(_t*q);
    }
    if(t<0){t+=mod;}
    if(a==1){std::cout<<" es : "<<t<<"\n";}
    else{std::cout<<" NO EXISTE\n";}
    return 0;
}

int main()
{
    cout << "\n\n 1.Suma  2.Resta  3.Multiplicacion  4.Inversa\n Operacion a realizar : ";
    int o;
    cin>>o;

    int oprd[3];
    cout<<"\n Ingrese el modulo : ";
    cin>>oprd[0];
    switch(o){
        case 1:
            cout<<" Ingrese los operadores :\n";
            cin>>oprd[1]>>oprd[2];
            suma(oprd);
            break;
        case 2:
            cout<<" Ingrese los operadores :\n";
            cin>>oprd[1]>>oprd[2];
            resta(oprd);
            break;
        case 3:
            cout<<" Ingrese los operadores :\n";
            cin>>oprd[1]>>oprd[2];
            multipl(oprd);
            break;
        case 4:
            cout<<" Ingrese el operador : ";
            cin>>oprd[1];
            if(oprd[1]>oprd[0]){oprd[1]= oprd[1]%oprd[0];}
            euclides(oprd[0],oprd[1]);
            break;
    }

    return main();
}
