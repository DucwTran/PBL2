#ifndef DOCTOR
#define DOCTOR

#include <string>
#include "Person.h"
using namespace std;

class Doctor: public Person {
private:
    string ChuyenNganh;
    string ID_doctor;
    string caLam;
    string Khoa;
    vector<string> cuocHen;

public:
    Doctor(string name, int age, string sex, string address, string phoneNumber, string email, string ChuyenNganh, string ID_doctor, string caLam, string Khoa, vector<string> cuocHen);

    ~Doctor();

    void display();

    string getChuyenNganh();
    string getID_doctor();
    string getcaLam();
    string getKhoa();
    vector<string> getcuocHen();

    void setChuyenNganh(string ChuyenNganh);
    void setID_doctor(string ID_doctor);
    void setcaLam(string caLam);
    void setKhoa(string Khoa);
    void setcuocHen(vector<string> cuocHen);
};

#endif
