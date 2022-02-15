#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;




int zgadnij (int podana)
{

int proby =2;

int probyy =6;

    int liczba, X=1, Y=20;
    srand(time(NULL));
    liczba=X + rand()%(Y-X+1);


    for (int i = 1; i <= proby; i++){

        if (podana!=liczba)
        {
         cout<< "Nie zgadles. Podaj ponownie liczbe: "<<endl;
        cin>> podana;

        }

         else  {

            cout <<"Zgadles!"<<endl;
            break;
            }
    }

    for (int i = 1; i <= probyy; i++){

        if(liczba<podana){

            cout<<"twoj strzal jest wiekszy od liczby"<<endl;
            cout<<"wprowadz ponownie"<<endl;
            cin>>podana;
        }

            else {


            cout<<"twoj strzal jest mniejszy od liczby"<<endl;
            cout<<"wprowadz ponownie"<<endl;
            cin>>podana;

            }

           if (liczba==podana){

                cout<<"wygrales!!!!!"<<endl;
                break;
            }





        }

    }








int main()
{
    int podana;

    cout <<"Musisz odgadnac liczbe calkowita z przedzialu od 1 do 20. Wybierz liczbe: "<<endl;
    cin >>podana;



    cout <<zgadnij (podana)<<endl;




}
