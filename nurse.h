#ifndef NURSE
#define NURSE

#include "person.h"

class Nurse: public Person {
private:
    string Speciality;
    long long ID_nurse;
public:
    Nurse(string name = "", int age = 0, string sex = "", string address = "", string phoneNumber = "", string email = "", string Speciality = "", long long ID_nurse = 0);

    ~Nurse();

    void display() override;
};

#endif
