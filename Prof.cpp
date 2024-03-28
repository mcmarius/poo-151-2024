//
// Created by marius on 28.03.2024.
//

#include "Prof.h"
#include <iostream>

Prof::Prof(const std::string &nume, const std::string &curs) : nume(nume), curs(curs) {}

std::ostream &operator<<(std::ostream &os, const Prof &prof) {
    os << "nume: " << prof.nume << " curs: " << prof.curs;
    return os;
}
