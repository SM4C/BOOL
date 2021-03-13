//Gli N dipendenti di un’azienda commerciale eseguono dei versamenti di imposta che vengono registrati caricando in tre vettori paralleli i nomi dei dipendenti, l’anzianità di servizio e l’importo. Visualizzare l’elenco alfabetico di tutti i dipendenti con a fianco l’importo. Facoltativo: trovare il nome del dipendente che ha effettuato il versamento massimo tra quelli che hanno più di 20 anni di servizio.

#include <iostream>
using namespace std;
int main ()
{
    int n;
    bool change;
    cout<<"quanti sono i dipendenti? "<<endl;
    cin>>n;
    string name[n], appn, choice;
    int anz[n], cash[n], appc, appa, maxcash=0;
    for (int i=0; i<=n-1; i++)
    {
        cout<<"inserisci il nome: "<<endl;
        cin>>name[i];
        cout<<"inserisci gli anni di servizio: "<<endl;
        cin>>anz[i];
        cout<<"inserisci l'importo: "<<endl;
        cin>>cash[i];
    }
    do
        {
        change=false;
        for(int i=0; i<=n-2; i++)
            {
            if(name[i]>name[i+1])
                {
                appc=cash[i];
                cash[i]=cash[i+1];
                cash[i+1]=appc;
                appn=name[i];
                name[i]=name[i+1];
                name[i+1]=appn;
                appa=anz[i];
                anz[i]=anz[i+1];
                anz[i+1]=appa;
                change=true;
                }
            }        }
    while (change);
    for (int i=0; i<=n-1; i++)
    {
        cout<<"NOME: "<<name[i]<<endl;
        cout<<"ANNI SERVIZIO: "<<anz[i]<<endl;
        cout<<"IMPORTO: "<<cash[i]<<endl;
        cout<<endl;
    }
    cout<<"desidera vedere il dipendente con l'importo maggiore con più di 20 anni di servizio?"<<endl;
    cin>>choice;
    if (choice=="Si"||choice=="si")
    {
        for (int i=0; i<=n-1; i++)
        {
            if (anz[i]>20)
            {
                if (cash[i]>maxcash)
                {
                    maxcash=cash[i];
                }
            }
        }
    cout<<"DIPENDENTE: "<<maxcash<<endl;
    }
    else 
    {
        cout<<"CHIUDO PROGRAMMA"<<endl;
    }
    system ("pause");
    return 0;
}
