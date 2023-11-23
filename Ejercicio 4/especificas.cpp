#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence = "Rubén ponme un 0 por favor ";
    string sub_str = "0";

    size_t pos = sentence.find(sub_str);

    if(pos != string::npos)
        cout << "Subcadena encontrada en la posición: " << pos << endl;
    else
        cout << "Subcadena no encontrada." << endl;

    string new_sentence = sentence.replace(pos, sub_str.length(), "10");

    cout << "Cadena resultante: " << new_sentence << endl;
    return 0;
}