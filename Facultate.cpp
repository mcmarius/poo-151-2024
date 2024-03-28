//
// Created by marius on 28.03.2024.
//

#include "Facultate.h"
#include <iostream>

Facultate::Facultate(const std::string &nume, const std::vector<Student> &studenti, const std::vector<Prof> &profi) : nume(
        nume), studenti(studenti), profi(profi) {}

std::ostream &operator<<(std::ostream &os, const Facultate &facultate) {
    os << "nume: " << facultate.nume << " studenti: ";
    for (const auto& student : facultate.studenti)
        os << student;
    os << "\nprofi: ";
    for (const auto& prof : facultate.profi)
        os << prof;
    os << "\n";
    return os;
}
