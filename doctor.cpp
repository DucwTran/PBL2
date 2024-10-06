#include "doctor.h"
#include <iostream>
#include <string>

using namespace std;

Doctor::Doctor(string name, int age, string sex, string address, string phoneNumber, string email, string ChuyenNganh, string ID_doctor, string caLam, string Khoa, vector<string> cuocHen)
    : Person(name, age, sex, address, phoneNumber, email), ChuyenNganh(ChuyenNganh), ID_doctor(ID_doctor), caLam(caLam), Khoa(Khoa), cuocHen(cuocHen) {
}

Doctor::~Doctor() {
}

void Doctor::display() {
    Person::display();  
    cout << "Khoa: " << Khoa << endl;
    cout << "Chuyen nganh: " << ChuyenNganh << endl;
    cout << "ID_doctor: " << ID_doctor << endl;
    cout << "Ca lam: " << caLam << endl;
    for(auto x : cuocHen) cout<<x<<" ";
    cout<<endl;
}


string Doctor::getChuyenNganh() {
    return ChuyenNganh;
}

string Doctor::getID_doctor() {
    return ID_doctor;
}

string Doctor::getcaLam() {
    return caLam;
}

string Doctor::getKhoa() {
    return Khoa;
}
vector<string> Doctor::getcuocHen(){
    return cuocHen;
}

void Doctor::setChuyenNganh(string ChuyenNganh) {
    this->ChuyenNganh = ChuyenNganh;
}

void Doctor::setID_doctor(string ID_doctor) {
    this->ID_doctor = ID_doctor;
}

void Doctor::setcaLam(string caLam) {
    this->caLam = caLam;
}

void Doctor::setKhoa(string Khoa) {
    this->Khoa = Khoa;
}
void Doctor::setcuocHen(vector<string> cuocHen){
    this->cuocHen = cuocHen;
}
