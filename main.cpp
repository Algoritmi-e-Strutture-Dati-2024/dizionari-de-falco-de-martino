#include <string>
#include "Dizionario.cpp"

int main() {

    Dizionario<std::string> dict;

    // Inserimento di alcune coppie chiave-valore
    dict.inserisci("apple", "fruit");
    dict.inserisci("car", "vehicle");
    dict.inserisci("book", "object");

    // Recupero e stampa dei valori associati alle chiavi
    std::cout << "Value for 'apple': " << dict.recupera("apple") << "\n";
    std::cout << "Value for 'car': " << dict.recupera("car") << "\n";
    std::cout << "Value for 'pen': " << dict.recupera("pen") << "\n"; // Chiave inesistente

   // Verifica se alcune chiavi appartengono al dizionario
    std::cout << "La chiave 'apple' esiste? " << (dizionario.appartiene("apple") ? "Sì" : "No") << "\n";
    std::cout << "La chiave 'pen' esiste? " << (dizionario.appartiene("pen") ? "Sì" : "No") << "\n"; 

    // Stampa tutto il contenuto del dizionario
    std::cout << "\nDizionario contiene:\n";
    dizionario.stampa();

    // Cancellazione di una chiave
    std::cout << "\nCancelliamo 'car'...\n";
    dizionario.cancella("car");

    // Verifica se la chiave è ancora presente dopo la cancellazione
    std::cout << "La chiave 'car' esiste dopo la cancellazione? " << (dizionario.appartiene("car") ? "Sì" : "No") << "\n";

    // Stampa del dizionario dopo la cancellazione
    std::cout << "\nDizionario dopo la cancellazione:\n";
    dizionario.stampa();

    return 0;
}
