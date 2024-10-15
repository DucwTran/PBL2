#include "doctor.h"
using namespace std;

Doctor::Doctor(string name, int age, string sex, string address, string phoneNumber, string email, string Speciality, long long ID_doctor)
    : Person(name, age, sex, address, phoneNumber, email), Speciality(Speciality), ID_doctor(ID_doctor) {
}

Doctor::~Doctor() {
}

void Doctor::display() {
    Person::display();  
    cout << "Chuyen nganh: " << Speciality << endl;
    cout << "ID_doctor: " << ID_doctor << endl;
}
