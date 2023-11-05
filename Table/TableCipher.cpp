#pragma once
#include <iostream>
#include <string>

class TableCipher {
public:
    TableCipher() = delete;
    TableCipher(const std::wstring& skey);
    std::wstring encrypt(const std::wstring& open_text);
    std::wstring decrypt(const std::wstring& cipher_text);

private:
    int key;
};
