#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   int numero, n1, n2, n3, n4, n5;
   int n6,n7,n8,n9,n10,n11,n12;
   cout<<"Escribe un numero de uno a diez mil (numeros): "; cin>>numero;
   n9 = numero/100000000;
   n8 = numero/10000000%10;
   n7 = numero/1000000%10;
   n6 = numero/100000%10;
   n1 = (numero / 10000 % 10);
   n2 = (numero / 1000) % 10;
   n3 = (numero / 100) % 10;
   n4 = (numero / 10) % 10;
   n5 = (numero % 10);

    cout<<"\n"<<n9<<" -> Centenas de millon"<<endl;
    cout<<n8<<" -> Decenas de millon"<<endl;
    cout<<n7<<" -> Unidades de millon"<<endl;
   cout<<n6<<" -> Centenas de mil"<<endl;
   cout<<n1<<" -> Decenas de mil"<<endl;
   cout<<n2<<" -> Unidades de mil"<<endl;
   cout<<n3<<" -> Centenas"<<endl;
   cout<<n4<<" -> Decenas"<<endl;
   cout<<n5<<" -> Unidades \n"<<endl;
   if(numero > 100000000){
      cout<<"El numero ingresado excede el rango de valores";
   }else{
    //Decenas de Millones
        if(n9 == 1){
            cout<<"CIEN MILLONES ";
        }
      if(n1 == 1){
         cout<<"DIEZ Y ";
      }else if(n1 == 2){
         cout<<"VEINTE Y ";
      }else if(n1 == 3){
         cout<<"TREINTA Y ";
      }else if(n1 == 4){
         cout<<"CUARENTA Y ";
      }else if(n1 == 5){
         cout<<"CINCUENTA Y ";
      }else if(n1 == 6){
        cout<<"SESENTA Y ";
      }else if(n1 == 7){
         cout<<"SETENTA Y ";
      }else if(n1 == 8){
         cout<<"OCHENTA Y ";
      }else if(n1 == 9){
         cout<<"NOVENTA Y "<<endl;
      }


    //Millones
        if(n8 == 1){
            cout<<"DIEZ MILLONES ";
        }
      if(n1 == 1){
         cout<<"UN MILLON ";
      }else if(n1 == 2){
         cout<<"DOS MILLONES ";
      }else if(n1 == 3){
         cout<<"TRES MILLONES ";
      }else if(n1 == 4){
         cout<<"CUATRO MILLONES ";
      }else if(n1 == 5){
         cout<<"CINCO MILLONES ";
      }else if(n1 == 6){
        cout<<"SEIS MILLONES ";
      }else if(n1 == 7){
         cout<<"SIETE MILLONES ";
      }else if(n1 == 8){
         cout<<"OCHO MILLONES ";
      }else if(n1 == 9){
         cout<<"NUEVE MILLONES "<<endl;
      }

    //Centenas de miles
        if(n7 == 1){
            cout<<"Un Millon";
        }
      if(n1 == 1){
         cout<<"CIEN ";
      }else if(n1 == 2){
         cout<<"DOSCIENTOS ";
      }else if(n1 == 3){
         cout<<"TRESCIENTOS ";
      }else if(n1 == 4){
         cout<<"CUATROCIENTOS ";
      }else if(n1 == 5){
         cout<<"QUINIENTOS ";
      }else if(n1 == 6){
        cout<<"SEISCIENTOS ";
      }else if(n1 == 7){
         cout<<"SETECIENTOS ";
      }else if(n1 == 8){
         cout<<"OCHOCIENTOS ";
      }else if(n1 == 9){
         cout<<"NOVECIENTOS "<<endl;
      }

   //Decenas de miles
        if(n6 == 1){
            cout<<"Cien mil";
        }
      if(n1 == 1){
         cout<<"DIEZ MIL ";
      }else if(n1 == 2){
         cout<<"VEINTI ";
      }else if(n1 == 3){
         cout<<"TREINTA Y ";
      }else if(n1 == 4){
         cout<<"CUARENTA ";
      }else if(n1 == 5){
         cout<<"CINCUENTA Y ";
      }else if(n1 == 6){
        cout<<"SESENTA Y ";
      }else if(n1 == 7){
         cout<<"SETENTA Y ";
      }else if(n1 == 8){
         cout<<"OCHENTA Y ";
      }else if(n1 == 9){
         cout<<"NOVENTA Y "<<endl;
      }
/***************************************/
      if(n1 == 1){
      cout<<"Diez mil";
      }

      //miles


      if(n2 == 1){
         cout<<"MIL ";
      }else if(n2 == 2){
         cout<<"DOS MIL ";
      }else if(n2 == 3){
         cout<<"TRES MIL ";
      }else if(n2 == 4){
         cout<<"CUATRO MIL ";
      }else if(n2 == 5){
         cout<<"CINCO MIL ";
      }else if(n2 == 6){
        cout<<"SEIS MIL ";
      }else if(n2 == 7){
         cout<<"SIETE MIL ";
      }else if(n2 == 8){
         cout<<"OCHO MIL ";
      }else if(n2 == 9){
         cout<<"NUEVE MIL "<<endl;
      }
      //Setencia para determinar los cientos
      if(n3 == 1 && n4 == 0 && n5 == 0){
         cout<<"CIEN";
      }else if(n3 == 1){
         cout<<"CIENTO ";
      }else if(n3 == 2){
         cout<<"DOSCIENTOS ";
      }else if(n3 == 3){
         cout<<"TRESCIENTOS ";
      }else if(n3 == 4){
         cout<<"CUATROCIENTOS ";
      }else if(n3 == 5){
         cout<<"QUINIENTOS ";
      }else if(n3 == 6){
         cout<<"SEISCIENTOS ";
      }else if(n3 == 7){
         cout<<"SETECIENTOS ";
      }else if(n3 == 8){
         cout<<"OCHOCIENTOS ";
      }else if(n3 == 9){
         cout<<"NOVECIENTOS ";
      }
      //Setencia para determinar las decenas
      if(n4 == 1 && n5 == 0){
         cout<<"Diez";
      }else if(n4 == 1 && n5 == 1){
         cout<<"ONCE";
      }else if(n4 == 1 && n5 == 2){
         cout<<"DOCE";
      }else if(n4 == 1 && n5 == 3){
         cout<<"TRECE";
      }else if(n4 == 1 && n5 == 4){
         cout<<"CATORCE";
      }else if(n4 == 1 && n5 == 5){
         cout<<"QUINCE";
      }else if(n4 == 1){
         cout<<"DIECI";
      }
      if(n4 == 2 && n5 == 0){
         cout<<"VEINTE";
      }else if(n4 == 2){
         cout<<"VEINTI";
      }else if(n4 == 3 && n5 == 0){
         cout<<"TREINTA";
      }else if(n4 == 3){
         cout<<"TREINTA Y ";
      }else if(n4 == 4 && n5 == 0){
         cout<<"CUARENTA";
      }else if(n4 == 4){
         cout<<"CUARENTA Y ";
      }else if(n4 == 5 && n5 == 0){
         cout<<"CINCUENTA";
      }else if(n4 == 5){
         cout<<"CINCUENTA Y ";
      }else if(n4 == 6 && n5 == 0){
         cout<<"SESENTA";
      }else if(n4 == 6){
         cout<<"SESENTA Y ";
      }else if(n4 == 7 && n5 == 0){
         cout<<"SETENTA";
      }else if(n4 == 7){
         cout<<"SETENTA Y ";
      }else if(n4 == 8 && n5 == 0){
         cout<<"OCHENTA";
      }else if(n4 == 8){
         cout<<"OCHENTA Y ";
      }else if(n4 == 9 && n5 == 0){
         cout<<"NOVENTA";
      }
      else if(n4 == 9){
         cout<<"NOVENTA Y ";
      }
      //Sentencia para determinar las unidades
      if(n5 == 1 && n4 > 1){
         cout<<"UNO";
      }else if(n5 == 1 && n4 == 0){
         cout<<"UNO";
      }else if(n5 == 2 && n4 > 1){
         cout<<"DOS";
      }else if(n5 == 2 && n4 == 0){
         cout<<"DOS";
      }else if(n5 == 3 && n4 > 1){
         cout<<"TRES";
      }else if(n5 == 3 && n4 == 0){
         cout<<"TRES";
      }else if(n5 == 4 && n4 > 1){
         cout<<"CUATRO";
      }else if(n5 == 4 && n4 == 0){
         cout<<"CUATRO";
      }else if(n5 == 5 && n4 > 1){
         cout<<"CINCO";
      }else if(n5 == 5 && n4 == 0){
         cout<<"CINCO";
      }else if(n5 == 6){
         cout<<"SEIS";
      }else if(n5 == 7){
         cout<<"SIETE";
      }else if(n5 == 8){
         cout<<"OCHO";
      }else if(n5 == 9){
         cout<<"NUEVE";
      }
   }
}
