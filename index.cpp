#include<bits/stdc++.h>
using namespace std;
#include"Appointment.cpp"
#include"doctor.cpp"
#include"nurse.cpp"
#include"person.cpp"
#include"MedicalRecord.cpp"
#include"patient.cpp"


int main(){
    vector<string> henBacSi;
    Doctor A("Tran Cong Duc", 18, "Nam", "Quang Binh","0123456", "TohC@gmail.com", "CNTT-AI","102230118", "fullday", "CNTT", henBacSi);
    A.display();

    vector<Doctor> attend;
    vector<string> henBenhNhan;
    attend.push_back(A);
    Patient B("TohC", 20, "Nam", "Da Nang", "12312435", "mail@.com", "1B2A6", attend, "cam cum", "044205001602", "08122005", henBenhNhan);
    B.display();

    vector<string> henYta;
    Nurse C("Chot", 19,"Nam", "Quang Binh", "12184184", "email@gmail", "123123123", "Sang", "San Khoa","Y ta gioi", henYta);
    C.display();
}