#ifndef BENHAN
#define BENHAN

#include <string>
#include <vector>
#include "Person.h"
#include "Doctor.h"

using namespace std;

class MedicalRecord : public Person {  
private:
    string ID_Record;
    vector<Doctor> bacSiThamGia;
    string Disease;

public:
    MedicalRecord(string name, int age, string sex, string address, string phoneNumber, string email, string ID_Record, vector<Doctor> bacSiThamGia, string Disease);

    ~MedicalRecord(); 

    void display();
    string getID_Record() const;
    vector<Doctor> getbacSiThamGia() const;
    string getDisease() const;


    void setID_Record(const string& ID_Record);
    void addbacSiThamGia(const Doctor& bacSi);
    void ChangebacSiThamGia(const vector<Doctor>& bacSiThamGia);
    void setDisease(const string& Disease);
};

#endif
