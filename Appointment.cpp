#include <iostream>
#include <string>
#include "patient.h"
#include "doctor.h"
#include "nurse.h"
#include "Appointment.h"

using namespace std;

Appointment::Appointment(string ID, Patient p, Doctor d, Nurse n, string date, string room, int status)
    : ID_appointment(ID), patient(p), doctor(d), nurse(n), date(date), room(room), status(status) {
}

string Appointment::getID_appointment() const {
    return ID_appointment;
}

Patient Appointment::getPatient() const {
    return patient;
}

Doctor Appointment::getDoctor() const {
    return doctor;
}

Nurse Appointment::getNurse() const {
    return nurse;
}

void Appointment::setID_appointment(const string& ID) {
    ID_appointment = ID;
}

void Appointment::setPatient(const Patient& p) {
    patient = p;
}

void Appointment::setDoctor(const Doctor& d) {
    doctor = d;
}

void Appointment::setNurse(const Nurse& n) {
    nurse = n;
}

void Appointment::display() {
    cout << "Thong tin cuoc hen: " << endl;
    cout << "ID Appointment: " << ID_appointment << endl;
    cout << "Date: " << date << endl;
    cout << "Room: " << room << endl;
    cout << "Status: " << status << endl;
    cout << "Patient Information:" << endl;
    patient.display();
    cout << "Doctor Information:" << endl;
    doctor.display();
    cout << "Nurse Information:" << endl;
    nurse.display();
}
