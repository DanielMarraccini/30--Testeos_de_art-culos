#include <iostream>

using namespace std;

int main(){

    int art, total, s, i;
    float p;

    char test, ra, rt;

    cout<<"Desea proceder con un art�culo?: "; cin>>ra;
    cout<<endl;

    while (ra == 's' || ra=='S'){

        total = 0, s = 0, i = 0;

        cout<<"\nTestear art�culo?: "; cin>>rt;
        cout<<"\nIngrese id de art�culo: "; cin>>art;
        cout<<endl;

        while(rt == 's' || rt=='S'){

            cout<<"Tipo de testeo (S/C/I): "; cin>>test;
            cout<<endl;

            switch(test){

                case 'S':
                case 's':
                case 'C':
                case 'c':
                    s++;
                    total++; break;
                case 'I':
                case 'i':
                    i++;
                    total++; break;
                default:
                    cout<<"Valor incorrecto. Intente de nuevo.";
            }

            cout<<endl;

            cout<<"Testear mismo art�culo otra vez?: "; cin>>rt;
            cout<<endl;
        }

        p = (i*100)/total;

        if(p==0){

            cout<<"Art�culo "<<art<<" . Aprobado.";
            } else if(p < 10){

                    cout<<"Art�culo "<<art<<" . Informar al fabricante.";
                    } else if(p < 15){

                        cout<<"Art�culo "<<art<<" . Informar al fabricante y organismo estatal.";
                        } else{

                            cout<<"Art�culo "<<art<<" . Informar al fabricante, organismo estatal e incorporar al bolet�n de productos fraudulentos.";
                        }

        cout<<"\n\nDesea proceder con otro art�culo?: "; cin>>ra;
    }

    cout<<endl;
    return 0;
}
