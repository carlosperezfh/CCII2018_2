#include <iostream>
#include <queue>
#include <fstream>
#include <math.h>
#include <time.h>
#include <windows.h>
using namespace std;


int modulo(int dividendo,int divisor)
{
    int q = dividendo/divisor;
    int r = dividendo - divisor*q;
    if(r < 0)
    {
        return r + divisor;
    }
    return r;
}

queue<int> MCD_especial(int divisor,int dividendo)
{
    queue<int> cola;
    int r = modulo(dividendo,divisor);
    int q = dividendo/divisor;
    cola.push(q);
    while(r != 1)
    {
        dividendo = divisor;
        divisor = r;
        r = modulo(dividendo,divisor);
        q = dividendo/divisor;
        cola.push(q);
    }
    return cola;
}

int MCD_normal(int dividendo,int divisor){
    int q = dividendo/divisor;
    int r = modulo(dividendo,divisor);
    while(r != 0){
        dividendo = divisor;
        divisor = r;
        q = dividendo/divisor;
        r = modulo(dividendo,divisor);
    }
    return divisor;
}


class calculadora_modular
{
public:
    int suma_modular(int numero_1,int numero_2,int mod)
    {
        int suma = modulo(numero_1 + numero_2,mod);
        return suma;
    }////////////////////////////
    int resta_modular(int numero_1,int numero_2,int mod)
    {
        int resta = modulo(numero_1 - numero_2,mod);
        return resta;
    }
    int multiplicacion_modular(int numero_1,int numero_2,int mod)
    {
        int multp = modulo(numero_1 * numero_2,mod);
        return multp;
    }
    int inverso_modular(int numero_1,int mod)
    {
        if(numero_1 == 1)
            return 1;
        std::queue<int> cola = MCD_especial(numero_1,mod);
        ///Ecuacion

        int q1 = 0;
        int q2 = 1;
        int qn;
        while (!cola.empty())
        {
            qn = q1 - q2*cola.front();
            qn = modulo(qn,mod);
            q1 = q2;
            q2 = qn;
            cola.pop();
        }
        return qn;
    }
};
void cifrar_unico(string txt_origen,string txtDestino,int clave,int cifrar = 1){
    calculadora_modular c;
    string mensaje,mensaje_cifrado,ch;
    ifstream txt_original;
    ofstream txt_destino;
    txt_original.open(txt_origen.c_str());
    txt_destino.open(txtDestino.c_str());
    int clave_privada;
    if(!txt_original.is_open()){
        cout << "El archivo no se ha abierto" << endl;
    }
    else
    {
        if(cifrar == 1){
            do{
                cout << "Ingrese la clave privada: ";
                cin >> clave_privada;
                if(clave_privada == 0){
                    clave_privada = 256;
                }
            }
            while(MCD_normal(256,clave_privada) != 1);
        }
        else{
            cout << "Ingreselo :";
            cin >> clave_privada;
        }
        while(!txt_original.eof()){
            getline(txt_original,mensaje);
            for(int cont = 0; cont < mensaje.length(); ++cont){
                if(cifrar == 1){
                    ch = (modulo(mensaje.at(cont)*clave_privada + clave,256));
                    mensaje_cifrado.append(ch);
                }
                else{
                    ch = (modulo((mensaje.at(cont) - clave)*clave_privada,256));
                    mensaje_cifrado.append(ch);
                }
            }
            txt_destino << mensaje_cifrado << '\n';
            mensaje_cifrado.erase();

        }
        if(cifrar == 1){
            cout << "Clave privada = " << clave_privada << " con inversa " << c.inverso_modular(clave_privada,256) << endl;
        }
    }
    cout << "Cerrando archivos" << endl;

    txt_destino.close();
    txt_original.close();
}

int main()
{
    srand(time(NULL));

    cifrar_unico("Mensaje_Original.txt","Mensaje_Cifrado.txt",3);

    cifrar_unico("Mensaje_Cifrado.txt","Mensaje_Descifrado.txt",3,-1);
}


