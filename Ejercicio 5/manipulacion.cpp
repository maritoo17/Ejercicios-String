#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Aprobado en Programación";
    string sub_str = str.substr(12, 7);

    string new_str = str.insert(0, "Un ");

    cout << "Subcadena: " << sub_str << endl;
    cout << "Cadena resultante: " << new_str << endl;
    return 0;
}