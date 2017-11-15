//# practicasClase

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char cadena[50];
    char letra;
    int num,num2;
    float dato1;
    ifstream archi("c:\\datos\\info.txt",ios::in);
    archi.getline(cadena,50);
    cout<<"cadena 1: "<<cadena<<endl;
    archi>>num;
    cout<<"numero +1 "<<num+1<<endl;
    cout<<" ->"<<archi.get()<<"<-";
    cout<<" ->"<<archi.get()<<"<-";
    cout<<" ->"<<archi.get()<<"<-";
    archi.getline(cadena,50);
    cout<<"cadena 2: "<<cadena<<endl;
    archi>>num2;
    archi>>dato1;
    cout<<" Datos entero y flotante"<<endl<<num2<<endl
        <<dato1<<endl;
    archi.getline(cadena,50); //es el final de los numeros
    archi.getline(cadena,50);
    cout<<"cadena 3: "<<cadena<<endl;

    int m[3][3];
    for (int r=0;r<3;r++)
        for (int c=0;c<3;c++)
            archi>>m[r][c];

    for (int r=0;r<3;r++){
        for (int c=0;c<3;c++)
            cout<<m[r][c]<<"\t";
        cout<<endl;
    }



/*
    for (int i=0;i<100;i++){
        letra=archi.get();
        cout<<letra<<"-";
    }
*/
    /*
    archi.getline(cadena,50);
    cout<<"cadena 1: "<<cadena<<endl;
    archi.getline(cadena,50);
    cout<<"cadena 2: "<<cadena<<endl;
    archi.getline(cadena,50);
    cout<<"cadena 3: "<<cadena<<endl;
    archi.getline(cadena,50);
    cout<<"cadena 3: "<<cadena<<endl;
    */

    archi.close();









    /*
    char nombre[40];
    int edad;
    float altura;
    int m[4][4];
    int num=1;
    cout<<"Ingresa nombre, edad y altura ";
    cin.getline(nombre,40);
    cin>>edad;
    cin>>altura;
    cout<<"Datos :::"<<endl;
    cout<<"Nombre: "<<nombre<<endl
        <<"Edad: "<<edad<<endl
        <<"Altura: "<<altura<<endl;
    for (int r=0;r<4;r++)
        for (int c=0;c<4;c++)
            m[r][c]=num++;

    cout<<endl<<"MATRIZ"<<endl;

    for (int r=0;r<4;r++)
    {
        for (int c=0;c<4;c++)
            cout<<m[r][c]<<", ";
        cout<<endl;
    }
*/
    return 0;
}

