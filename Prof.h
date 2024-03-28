//
// Created by marius on 28.03.2024.
//

#ifndef OOP_PROF_H
#define OOP_PROF_H


#include <string>

class Prof {
    std::string nume;
    std::string curs;
public:
    Prof(const std::string &nume, const std::string &curs);

    friend std::ostream &operator<<(std::ostream &os, const Prof &prof);
};


#endif //OOP_PROF_H
