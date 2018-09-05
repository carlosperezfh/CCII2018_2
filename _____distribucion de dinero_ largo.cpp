#include <iostream>
using namespace std;

int main(){
    int resto1,resto2=0;
    int b7=7,b5=5,b3=3,b1=1,litros=84;
    int cal1,cal2,cal3,cal4=0;
    int calBot=0,calBot5=0,calBot3=0,calBot1=0;
    int acub1=0,acub3=0,acub5=0,acub7=0;

    cal1=litros%b7;
    cal2=litros%b5;
    cal3=litros%b3;
    cal4=litros%b1;

    cout<<cal1<<endl;   //resto
    cout<<cal2<<endl;   //resto
    cout<<cal3<<endl;   //resto
    cout<<cal4<<endl;   //resto

    cout<<endl;
    cout<<endl;

    if (cal1==0 || litros>b7){
        calBot=litros/b7;
        acub7=acub7+7;
        cout<<"se mete"<<endl;
        if (cal1>=b5){
            calBot5=cal1/b5;
            acub5=acub5+5;
            resto1=acub1+acub3+acub5+acub7;
            resto2=litros-resto1;
            if (resto2==0)
                goto salir;
            cout<<acub7<<"  "<<acub5<<"  "<<acub3<<"  "<<acub1<<"  valor de acuus"<<endl;
            cout<<endl;
            cout<<endl;
        }
        if (cal1>=b3 && resto2>litros){
            calBot3=cal1/b3;
            acub3=acub3+3;
            resto1=acub1+acub3+acub5+acub7;
            resto2=litros-resto1;
            cout<<acub7<<"  "<<acub5<<"  "<<acub3<<"  "<<acub1<<"  valor de acuus"<<endl;
            cout<<endl;
            cout<<endl;
        }
        resto1=(acub1+acub3+acub5+acub7)*calBot;
        resto2=litros-resto1;
        if (cal1>=resto2)
            calBot1=resto2;

        goto salir;
    }
    if (cal2==0){
        calBot=litros/b5;
        cout<<calBot<<"  botellas de 5 litros"<<endl;
        goto salir;
    }
    if (cal3==0){
        calBot=litros/b3;
        cout<<calBot<<"  botellas de 3 litros"<<endl;
        goto salir;
    }
    if (cal4==0){

        calBot=litros/b1;
        cout<<calBot<<"  botellas de 1 litro"<<endl;
        goto salir;
    }

    salir:
    cout<<calBot<<"  botellas de 7 litros"<<endl;
    cout<<calBot5<<"  botellas de 5 litros"<<endl;
    cout<<calBot3<<"  botellas de 3 litros"<<endl;
    cout<<calBot1<<"  botellas de 1 litro"<<endl;

    return 0;
}
