#include<iostream> 
using namespace std;

class Magazin{
public:
	string oras;
	int nrAngajati;
	float suprafata;
	const int anDeschidere; //nu poate fi modificat pe toata perioada obiectului
	static int impozitM2; //sa nu ocupam spatiu mult pt fiecare, declaram in zona de memorie a clasei
	//atributele trebuie sa fie in zona private / le punem doar azi in zona publica
	//zona de memorie a obiectelor se afla atributele
	//facem constructorul - scopul constr este sa initializeze atributele unui obiect 
	Magazin():anDeschidere(2024), nrAngajati(2) {
		this->oras = "Bucuresti";
		this->nrAngajati = 2;
		this->suprafata = 50;
	}
	void afisare() {
		//nu mai primim ca avem this 
		//this - pointer care va ponta catre pointerul direct
		cout << "Oras:" << this->oras << endl;
		cout << "Numar angajati:" << this->nrAngajati << endl;
		cout << "Suprafata:" << this->suprafata << endl;
		cout << "An deschidere:" << this->anDeschidere << endl;
		cout << "Impozit pe m patrat:" << Magazin:: impozitM2 << endl;
	}
};
//initializam 
// :: = operatorul de rezolutie
int Magazin::impositM2 = 2;
int main() {
	

}