//
// Created by marius on 28.03.2024.
//

#include "Student.h"
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << student.nume << " " << student.grupa << "\n";
    return os;
}

Student::Student(const std::string &nume_, int grupa_) : nume(nume_), grupa(grupa_) {}

Student::Student(const Student &other) : nume(other.nume), grupa(other.grupa) {
    std::cout << "cc student\n";
}

Student &Student::operator=(const Student &other) {
    std::cout << "op= student\n";
    this->nume = other.nume;
    this->grupa = other.grupa;
    return *this;
}

Student::~Student() {
    std::cout << "destr student\n";
}
