//
// Created by marius on 28.03.2024.
//

#ifndef OOP_FACULTATE_H
#define OOP_FACULTATE_H


#include <vector>
#include "Student.h"
#include "Prof.h"

class Facultate {
    std::string nume;
    std::vector<Student> studenti;
    std::vector<Prof> profi;
public:

    Facultate(const std::string &nume, const std::vector<Student> &studenti, const std::vector<Prof> &profi);

    friend std::ostream &operator<<(std::ostream &os, const Facultate &facultate);
};



#endif //OOP_FACULTATE_H
