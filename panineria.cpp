#include <iostream>
#include <list>
using namespace std;

class ordine{
	public:
	string ricetta;
	list<string> ingredienti;
};

void mostra_ingred(list<string> lista){
	list<string>::iterator p;
  	int i = 0;
  	
	for(p = lista.begin(); p != lista.end(); p++){
  	cout<<"Ingredienti "<<++i <<": "<< *p<< endl;  //il ++ va prima per incrementarlo prima che venga usato
	}
}

void inserisci_ordine(string nomeRicetta, ordine* o){
	
	o->ricetta = nomeRicetta;
	
	string ingrediente;
	while(true) {
		cout<<"Inserisci un ingrediente: "<<endl;
cin>>ingrediente;
		if(ingrediente=="*"){
			break;
		}
		o->ingredienti.push_back(ingrediente);
	}
}
void ordina(string ricetta){
	ordine* o = new ordine();
	string nomeRicetta;
  	cout<<"Inserisci nome panino: "<<endl;
  	cin>>nomeRicetta;
	inserisci_ordine(nomeRicetta, o);
	mostra_ingred(o->ingredienti);
}
int main() {
	ordine* o = new ordine();
  /*list<string> lista;
  string ingrediente;
  cin>>ingrediente;
  lista.push_back(ingrediente);
  //lista = new list<string>()
  mostra_ingred(lista);*/
  string nomeRicetta;
  cout<<"Inserisci nome panino: "<<endl;
  cin>>nomeRicetta;
  inserisci_ordine(nomeRicetta, o);
  mostra_ingred(o->ingredienti);
  ordina(nomeRicetta);
	return 0;
}
