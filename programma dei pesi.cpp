//Riempire due vettori paralleli con i nomi e i pesi di N (<=50) oggetti.  Calcolare e visualizzare il peso medio degli oggetti. Visualizzare i nomi degli oggetti che hanno un peso maggiore di un valore fornito da tastiera in ordine decrescente di peso, con a fianco il nome dell’oggetto.

#include <iostream>
using namespace std;
int main ()
{
	int n;
	bool scambio;
	cout<<"quanti sono gli oggetti? "<<endl;
	cin>>n;
	float pesi[n], media, somma, controllo, appp;
	string nomi[n], appn;
	for (int i=0; i<=n-1; i++)
	{
		cout<<"inserisci il nome dell'oggetto: "<<endl;
		cin>>nomi[i];
		cout<<"inserisci il peso dell'oggetto: "<<endl;
		cin>>pesi[i];
		somma= pesi[i]+somma;
	}
	media=somma/n;
	cout<<"la media generale è: "<<media<<endl;
	cout<<endl;
	do 
	{
		scambio=false;
		for (int i=0; i<=n-1; i++) 
			{
			if (pesi[i]<pesi[i+1])
				{
				appn=nomi[i];
				nomi[i]=nomi[i+1];
				nomi[i+1]=appn;
				appp=pesi[i];
				pesi[i]=pesi[i+1];
				pesi[i+1]=appp;
				scambio=true;
				}
			}
	} while (scambio);
	cout<<"inserisci il valore di controllo: "<<endl;
	cin>>controllo;
	for (int i=0; i<=n-1; i++)
	{
		if (pesi[i]>=controllo)
		{
			cout<<"NOME: "<<nomi[i]<<endl;;
			cout<<"PESO: "<<pesi[i]<<endl;
		}
	}
	system ("pause");
	return 0;
}
