#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


int main(){
    string cheminFichier;

    cout << "---------- ATTENTION ----------" << endl;
    cout << "|  Lorsque vous entrerez le   |" << endl;
    cout << "|   Chemin du fichier, celui  |" << endl;
    cout << "|      ci sera SUPPRIMÉ       |" << endl;
    cout << "-------------------------------" << endl;

    cout << "Entrez le chemin d'accès du fichier : " << endl;
    cin >> (cheminFichier);

    ofstream fichierOuvert(cheminFichier.c_str());

    if(fichierOuvert){

        long count = 9999999999999999;
        for (int i = 0; i < count; i++) {
            fichierOuvert << "                                                           " << endl;
        }
        

    }else
    {

        cout << "ERREUR ! Impossible d'ouvrir le fichier !" << endl;
    }

    return 0;
}