#include<bits/stdc++.h>
using namespace std;
#include"hospital.h"

Hospital::Hospital() {
    A = {};
    B = {};
    C = {};
    D = {};
}

Hospital::Hospital(vector<Doctor> doctors, vector<Nurse> nurses, vector<Patient> patients, vector<Appointment> appointments)
    : A(doctors), B(nurses), C(patients), D(appointments) {
}


