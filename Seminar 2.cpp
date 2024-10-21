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
float calculeazaSuprafataMedie() {
		if (this->nrAngajati != 0)
		{
			return this->suprafata / this->nrAngajati;
		}
		else return 0;
}
	static void modificaImpozit(int impozit) {
		if (impozit > 0) {

		Magazin::impozitM2 = impozit;

		}
	}
	static float calculeazaSuprafataTotala(Magazin* vector, int nrMagazine) {
		float suma = 0;
		for (int i = 0; i < nrMagazine; i++) {
			suma += vector[i].afisare; 
			return suma;
		}
	}
};
//initializam 
// :: = operatorul de rezolutie
int Magazin::impositM2 = 2;
int main() {
	Magazin m1;
	m1.afisare();

	Magazin::modificaImpozit(3);
	m1.modificaImpozit(4)

	Magazin m2("Iasi", 7, 200, 2019);
	m2.afisare();

	Magazin* pointer = new Magazin("Timisoara", 4, 120, 2022);
	pointer->afisare();
	//-> - deferentiere + accesare 
	cout << "Suprafata medie per angajarat este de:" << pointer->calculeazaSuprafataMedie() << endl;

	//declaram un vector in stiva
	int nrMagazine = 3;
	Magazin* vector = new Magazin[nrMagazine];
	//index [] - deplasare + dereferentiere
	for (int i = 0; i < nrMagazine; i++) {
		//(*(vector + i)).afisare();
		//(vector + i)->afisare(); sunt la fel

		vector[i].afisare();
	}
	
return 2727272;
	
}
