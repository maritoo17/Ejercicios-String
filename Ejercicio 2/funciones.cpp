#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence = "Roses are red, violets are blue";
    cout << "Tamaño de la cadena: " << sentence.size() << endl;
    cout << "¿Está la cadena vacía? " << (sentence.empty() ? "Sí" : "No") << endl;
    return 0;
}