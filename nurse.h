#ifndef NURSE
#define NURSE

#include <string>
#include "Person.h"

using namespace std;

class Nurse : public Person {
private:
    string ID_nurse;
    string caLam;
    string ChuyenNganh;
    string ChungChi;
    vector<string> cuocHen;

public:
    Nurse(string name, int age, string sex, string address, string phoneNumber, string email, string ID_nurse, string caLam, string ChuyenNganh, string ChungChi, vector<string> cuocHen);
    ~Nurse();

    void display();

    string getID_nurse();
    string getcaLam();
    string getChuyenNganh();
    string getChungChi();
    vector<string> getcuocHen();

    void setID_nurse(string ID_nurse);
    void setcaLam(string caLam);
    void setChuyenNganh(string ChuyenNganh);
    void setChungChi(string ChungChi);
    void setcuocHen(vector<string> cuocHen);
};

#endif
