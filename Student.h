//
// Created by marius on 28.03.2024.
//

#ifndef OOP_STUDENT_H
#define OOP_STUDENT_H


#include <string>
#include <iosfwd>

class Student {
    std::string nume;
    int grupa{};
public:
    Student() = default;
    Student(const std::string& nume_, int grupa_);
    Student(const Student& other);
    Student& operator=(const Student& other);
    ~Student();
    std::strong_ordering operator <=> (const Student&) const = default;
    friend std::ostream& operator<<(std::ostream& os, const Student& student);
};


#endif //OOP_STUDENT_H
