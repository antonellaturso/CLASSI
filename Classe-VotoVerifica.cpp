#include <iostream>
#include <string>
using namespace std;
//definisci classe
class Verifica
{
	public:
		int voto; //campi fields della classe
		string materia;
		string nome;
		int cambiavoto() //metodo che calcola area
		{
			do 
			{
			cout << "\n inserisci voto ";
			cin>> voto;
			
			}
			while (voto<=0 || voto >10);
			
		}
		void leggi()
		{
			cout << "\n inserisci il tuo nome e cognome";
			getline (cin,nome);//acquisisce il nome e cognome con spazio come il gets() in C
			cout << "\n inserisci materia  "<<endl;//come writeline, endl fa scrivere il testo a capo
			cin>>materia;
			
			do 
			{
			cout << "\n inserisci voto ";
			cin>> voto;
			
			}
			while (voto<=0 || voto >10);
		}
};

int main()
{
 	  //istanzio l'oggetto ver sulla base della classe Verifica
 	  Verifica ver;
 	  char r;
 	  int voto;
	  ver.leggi();
 	  cout <<"\n vuoi cambiare il voto? (S/N)";
 	  cin>>r;
 	  if (r=='S' || r=='s')
	   {
	   	ver.cambiavoto();
	   	cout<<"\n caro studente: ";
	   	cout<<ver.nome;
 	  	cout <<"\n nuovo voto inserito: ";
 	  	cout<<ver.voto;
	   }
 	  else 
	   {
	   	cout<<"\n caro studente: ";
	   	cout<<ver.nome;
 	  	cout<<"\n il voto rimane invariato!";
 	  	cout<<ver.voto;
	   }
 	  cout <<"\nFine programma! \n";
 	  system("pause");
 	  return 0;
}

