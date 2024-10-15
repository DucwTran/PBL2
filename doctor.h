#ifndef DOCTOR
#define DOCTOR

#include "person.h"

class Doctor: public Person {
private:
    string Speciality;
    long long ID_doctor;
public:
    Doctor(string name = "", int age = 0, string sex = "", string address = "", string phoneNumber = "", string email = "", string Speciality = "", long long ID_doctor = 0);

    ~Doctor();

    void display() override;
};

#endif