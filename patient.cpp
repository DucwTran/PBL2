#include "patient.h"
#include <bits/stdc++.h>  
using namespace std;

Patient::Patient(string name, int age, string sex, string address, string phoneNumber, 
                 string email, string ID_Record, vector<Doctor> bacSiThamGia, 
                 string Disease, string ID_patient, string ID_BHYT, 
                 vector<string> cuocHen)
    : benhAn(name, age, sex, address, phoneNumber, email, ID_Record, bacSiThamGia, Disease), 
      cuocHen(cuocHen), ID_BHYT(ID_BHYT), ID_patient(ID_patient) {
}

Patient::~Patient() {
}

string Patient::getID_patient() {
    return ID_patient;
}

string Patient::getID_BHYT() {
    return ID_BHYT;
}

vector<string> Patient::getCuocHen() {  
    return cuocHen;
}

void Patient::display() {
    benhAn.display();
    cout << "Patient ID: " << ID_patient << endl;
    cout << "BHYT ID: " << ID_BHYT << endl;
    cout << "Cuoc hen: ";
    for (auto x : cuocHen) {
        cout << x << " ";
    }
    cout << endl;
}

void Patient::setID_patient(string ID_patient) {
    this->ID_patient = ID_patient;
}

void Patient::setID_BHYT(string ID_BHYT) {
    this->ID_BHYT = ID_BHYT;
}

void Patient::setCuocHen(vector<string> cuocHen) { 
    this->cuocHen = cuocHen;
}
