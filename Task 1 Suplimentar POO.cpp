#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Bloc {
private:
    string strada;
    int numarScari;
    int numarApartamente;
    string asociatieProprietari;
    int anConstructie;

public:
    Bloc() : strada(""), numarScari(0), numarApartamente(0), asociatieProprietari(""), anConstructie(0) {}

    void citesteDate() {
        cout << "Introduceți strada: ";
        getline(cin, strada);
        cout << "Introduceți numărul de scări: ";
        cin >> numarScari;
        cout << "Introduceți numărul de apartamente: ";
        cin >> numarApartamente;
        cin.ignore(); 
        cout << "Introduceți numele asociației de proprietari: ";
        getline(cin, asociatieProprietari);
        cout << "Introduceți anul construcției: ";
        cin >> anConstructie;
        cin.ignore(); 
    }

    void afiseazaDate() const {
        cout << "Blocul de pe strada " << strada
            << ", are " << numarScari << " scări și un număr total de "
            << numarApartamente << " apartamente. Asociația de proprietari este "
            << asociatieProprietari << ", iar anul construcției este " << anConstructie << ".\n";
    }
};

int main() {
    const int numarBlocuri = 10;
    vector<Bloc*> blocuri(numarBlocuri);

    
    for (int i = 0; i < numarBlocuri; i++) {
        blocuri[i] = new Bloc();  
        cout << "\nIntrodu datele pentru blocul " << (i + 1) << ":\n";
        blocuri[i]->citesteDate();
    }


    cout << "\nInformațiile despre blocuri:\n";
    for (int i = 0; i < numarBlocuri; i++) {
        blocuri[i]->afiseazaDate();
    }

    
    for (int i = 0; i < numarBlocuri; i++) {
        delete blocuri[i];
    }

    return 0;
}
