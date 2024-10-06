#include<bits/stdc++.h>
using namespace std;
#include "Appointment.h"
#include "doctor.h"
#include "nurse.h"
#include "person.h"
#include "MedicalRecord.h"
#include "patient.h"

class Hospital {
private:
    vector<Doctor> A;       
    vector<Nurse> B;        
    vector<Patient> C;      
    vector<Appointment> D; 

public:
    Hospital();
    Hospital(vector<Doctor> doctors, vector<Nurse> nurses, vector<Patient> patients, vector<Appointment> appointments);
    void makeSchedule(); //tac vu chinh chua lam(class hospital)
    void addPerson();
    void removePerson();
    void searchPerson();
    void displayHospital();
    void displayPerson();
};
