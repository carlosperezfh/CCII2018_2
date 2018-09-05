#include <iostream>

using namespace std;

int main()
{
    int l;
    cout<<"ingresa los litros: ";
    cin>>l;
    cout<<endl;

    int c1=0,c2=0,c3=0,c4=0;
    double r1,r2,r3,r4;
    int ent;
    double dec;

    r1=l/7;
    ent=r1;
    c1=ent;

    int res=ent*7;
    dec=l-res;
    if(dec==1)
        c4++;
    if(dec>1&&dec<=3)
        c3++;
    if(dec>3&&dec<=5)
        c2++;


    cout<<ent<<endl;
    cout<<dec<<endl;

    cout <<c1<<" botella"<< " de 7L " << endl;
    cout <<c2<<" botella"<< " de 5L " << endl;
    cout <<c3<<" botella"<< " de 3L " << endl;
    cout <<c4<<" botella"<< " de 1L " << endl;
    return 0;
}
