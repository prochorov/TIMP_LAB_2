#include <iostream>
#include "TableCipher.h"

using namespace std;

int main() {
    wstring key;
    wstring text;
    unsigned op;

    wcout << "Cipher ready. Input key: ";
    wcin >> key;
    TableCipher cip(key);
    wcout << "Key loaded\n";

    do {
        wcout << "Cipher ready. Input operation (0-exit, 1-encrypt, 2-decrypt): ";
        wcin >> op;

        if (op > 2) {
            wcout << "Illegal operation\n";
        } else if (op > 0) {
            wcout << "Cipher ready. Input text: ";
            wcin.ignore();
            getline(wcin, text);

            if (op == 1) {
                wcout << "Encrypted text: " << cip.encrypt(text) << endl;
            } else {
                wcout << "Decrypted text: " << cip.decrypt(text) << endl;
            }
        }
    } while (op != 0);

    return 0;
}
