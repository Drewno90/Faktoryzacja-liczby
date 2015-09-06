#include<iostream>
#include<conio.h>
using namespace std;

int faktor(long a)
{
    long b=a;
                 while(a%2==0)                  //pozbywamy się wszystkich dwójek z podawanej liczby
    {
              a=a/2;
              cout <<"2";
              if(a==1)
                           break;
              cout<<"*";
     }
    for(int i=3; i<a+1;i=i+2)                    //pozbywamy się wszystkich liczb pierwszych
    {
    while(a%i==0)
    {
              a=a/i;
              cout <<i;                  
              if(a==1)
                           break;
              cout<<"*";          
     }
     }
     cout <<"=";
     return b;
}
int main()
{
    long liczba;
    char kont;
    int i;
    cout <<"Program faktoryzujacy liczby naturalne"<<endl;
    cout <<"Podaj liczbe"<<endl;
    cin >> liczba;
    cout << faktor(liczba)<<endl;
    do                                            //w tej pętli umieszczono zapytanie o ponowne wywołanie funkcji faktor
    {
        cout<<"chcesz kontynuowac? (T/N)";
        cin >>kont;
        if(kont=='t')
            {
            cout <<"Podaj liczbe"<<endl;
            cin >> liczba;
            cout << faktor(liczba)<<endl;
            }
        else if(kont=='n')
            {
            cout <<"no to konczymy prace"<<endl;
            break;
            }
    }
    while(i==0);
    system("PAUSE");
    return 0;
}


