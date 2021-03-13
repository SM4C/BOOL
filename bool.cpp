#include <iostream>
using namespace std;
int main ()
{    int n;
    bool scambio, cond;
    cout<<"quanti sono gli atleti?"<<endl;
    cin>>n;
    float point[n], newpoint, appoint;
    string nomi[n], choice, nomeric, appn;
    for(int i=0; i<=n-1; i++)
    {
        cout<<"NOME: "<<endl;
        cin>>nomi[i];
        cout<<"PUNTI: "<<endl;
        cin>>point[i];
    }
    do 
    {
        cout<<"Vuoi modificare dei punteggi?"<<endl;
        cin>>choice;
        if (choice=="Si"||choice=="si")
        {
            cond= true;
            cout<<"inserisci il nome dell'atleta da modificare: "<<endl;
            cin>>nomeric;
            for(int i=0; i<=n-1; i++)
            {
                if (nomi[i]==nomeric)
                {
                    cout<<"inserisci il nuovo punteggio: ";
                    cin>>newpoint;
                    point[i]=newpoint;
                }
            }
        }
        else
        {
            cond=false;
        }
    } 
     while (cond);
    do 
    {
        scambio=false;
        for (int i=0; i<=n-1; i++) 
        {
            if (point[i]<point[i+1])
            {
                appn=nomi[i];
                nomi[i]=nomi[i+1];
                nomi[i+1]=appn;
                appoint=point[i];
                point[i]=point[i+1];
                point[i+1]=appoint;
                scambio=true;
            }
        }
    } while (scambio);
    cout<<"CLASSIFICA: "<<endl;
    for (int i=0; i<=n-1; i++)
    {
        cout<<"NOME: "<<nomi[i]<<endl;
        cout<<"PUNTI: "<<point[i]<<endl;
    }
    system ("pause");
    return 0;
}
