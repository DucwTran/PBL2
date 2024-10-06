#include "MedicalRecord.h"
#include "Person.h"
#include "Doctor.h"
#include <string>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


MedicalRecord::MedicalRecord(string name, int age, string sex, string address, string phoneNumber, string email, string ID_Record, vector<Doctor> bacSiThamGia, string Disease)
    : Person(name, age, sex, address, phoneNumber, email), ID_Record(ID_Record), bacSiThamGia(bacSiThamGia), Disease(Disease) {
}


MedicalRecord::~MedicalRecord() {
}


string MedicalRecord::getID_Record() const {
    return ID_Record;
}

vector<Doctor> MedicalRecord::getbacSiThamGia() const {
    return bacSiThamGia;
}

string MedicalRecord::getDisease() const {
    return Disease;
}

void MedicalRecord::setID_Record(const string& ID_Record) {
    this->ID_Record = ID_Record;
}

void MedicalRecord::addbacSiThamGia(const Doctor& bacSi) {
    bacSiThamGia.push_back(bacSi);
}

void MedicalRecord::ChangebacSiThamGia(const vector<Doctor>& bacSiThamGia) {
    this->bacSiThamGia = bacSiThamGia;
}

void MedicalRecord::setDisease(const string& Disease) {
    this->Disease = Disease;
}
void MedicalRecord::display(){
    Person::display();
    cout<<"ID_Record: "<<ID_Record<<endl;
    cout<<"Bac si tham gia: ";
    for(auto x : bacSiThamGia) cout<<x.getName()<<endl;
    cout<<"Benh: "<<Disease<<endl;;

}
