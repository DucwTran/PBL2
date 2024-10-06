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
    void addDoctor();
    void addNurse();
    void addPatient();

    void removeDoctor();
    void removeNurse();
    void removePatient();

    void searchDoctor();
    void searchNurse();
    void searchpatient();

    void displayHospital();
    void displayDoctor();
    void displayNurse();
    void displaypatient();
    /*Muon them cac tac vu mo rong cho phong phu thi add nhé */
};
