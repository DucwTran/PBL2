#include "nurse.h"
using namespace std;

Nurse::Nurse(string name, int age, string sex, string address, string phoneNumber, string email, string Speciality, long long ID_nurse)
    : Person(name, age, sex, address, phoneNumber, email), Speciality(Speciality), ID_nurse(ID_nurse) {
}

Nurse::~Nurse() {
}

void Nurse::display() {
    Person::display();  
    cout << "Chuyen nganh: " << Speciality << endl;
    cout << "ID_nurse: " << ID_nurse << endl;
}
