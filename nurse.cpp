#include "Nurse.h"
#include <iostream>
#include <string>

using namespace std;

Nurse::Nurse(string name, int age, string sex, string address, string phoneNumber, string email, string ID_nurse, string caLam, string ChuyenNganh, string ChungChi, vector<string> cuocHen)
    : Person(name, age, sex, address, phoneNumber, email), ID_nurse(ID_nurse), caLam(caLam), ChuyenNganh(ChuyenNganh), ChungChi(ChungChi), cuocHen(cuocHen) {
}


Nurse::~Nurse() {
}

void Nurse::display() {
    Person::display();  
    cout << "ID_nurse: " << ID_nurse << endl;
    cout << "Chuyen nganh: " << ChuyenNganh << endl;
    cout << "Chung chi: " << ChungChi << endl;
    cout << "Ca lam: " << caLam << endl;
    cout <<"Cuoc hen: ";
    for(auto x  : cuocHen) cout<<x<<" ";
    cout<<endl;
}


string Nurse::getID_nurse() {
    return ID_nurse;
}

string Nurse::getcaLam() {
    return caLam;
}

string Nurse::getChuyenNganh() {
    return ChuyenNganh;
}

string Nurse::getChungChi() {
    return ChungChi;
}
vector<string> Nurse::getcuocHen(){
    return cuocHen;
}

void Nurse::setID_nurse(string ID_nurse) {
    this->ID_nurse = ID_nurse;
}

void Nurse::setcaLam(string caLam) {
    this->caLam = caLam;
}

void Nurse::setChuyenNganh(string ChuyenNganh) {
    this->ChuyenNganh = ChuyenNganh;
}

void Nurse::setChungChi(string ChungChi) {
    this->ChungChi = ChungChi;
}
void Nurse::setcuocHen(vector<string> cuocHen){
    this->cuocHen = cuocHen;
}
