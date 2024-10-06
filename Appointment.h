#include <iostream>
#include <string>
#include "patient.h"
#include "doctor.h"
#include "nurse.h"

#ifndef APPOINTMENT
#define APPOINTMENT

using namespace std; 

class Appointment {
private:
    string ID_appointment;
    Patient patient;
    Doctor doctor;
    Nurse nurse;
    string date;
    string room;
    int status;


public:
    Appointment(string ID, Patient p, Doctor d, Nurse n,string date, string room, int status );
    void display();

    void setID_appointment(const string& ID);
    void setPatient(const Patient& p);
    void setNurse(const Nurse& n) ;
    void setDoctor(const Doctor& d);

    Nurse getNurse() const;
    Doctor getDoctor() const;
    Patient getPatient() const;
    string getID_appointment() const;
};

#endif
