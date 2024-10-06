#ifndef PATIENT
#define PATIENT
#include "MedicalRecord.h"
#include <bits/stdc++.h>  // Thay vì include các thư viện cần thiết riêng lẻ
using namespace std;

class Patient {
private:
    string ID_patient;
    MedicalRecord benhAn;
    string ID_BHYT;
    vector<string> cuocHen;  // Đây là biến dữ liệu

public:
    Patient(string name, int age, string sex, string address, string phoneNumber, 
            string email, string ID_Record, vector<Doctor> bacSiThamGia, 
            string Disease, string ID_patient, string ID_BHYT, 
            vector<string> cuocHen);
    ~Patient();

    void display();
    string getID_patient();
    string getID_BHYT();
    vector<string> getCuocHen(); 

    void setID_patient(string ID_patient);
    void setID_BHYT(string ID_BHYT);
    void setCuocHen(vector<string> cuocHen);  
};

#endif
