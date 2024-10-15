#include <bits/stdc++.h>
#include "../material/material.h"
using namespace std;

//Doctors Method
void addDoctor(map <long long, Doctor> &Doctors){
    cout<<"\nFill the following info of the new Doctor: ";

    string name;
    cout<<"\nName: "; cin>>name;

    int age;
    cout<<"\nAge: "; cin>>age;
    
    string sex;
    cout<<"\nGender: "; cin>>sex;
    
    string address;
    cout<<"\nAddress: "; cin>>address;

    string phoneNumber;
    cout<<"\nPhonenumber: "; cin>>phoneNumber;
    
    string email;
    cout<<"\nEmail: "; cin>>email;
    
    string Speciality;
    cout<<"\nSpeciality: "; cin>>Speciality;

    long long ID_Doctor;
    cout<<"\nID: "; cin>>ID_Doctor;

    Doctors[ID_Doctor] = Doctor(name,age,sex,address,phoneNumber,email,Speciality,ID_Doctor);
}

void removeDoctor(map <long long, Doctor> &Doctors){
    int ID;
    cout<<"\nEnter the ID of the doctos need to be delete: "; cin>>ID;
    Doctors.find(ID) == Doctors.end() ? cout<<"\nIncorrect ID, pass!" : cout<<"The doctor: "<<ID<<" has been removed";
}

void displayDoctor(map <long long, Doctor> &Doctors){
    for(auto &i: Doctors){
        i.second.display();
    }
}


//Nurse method

void addNurse(map <long long, Nurse> &Nurses){
    cout<<"\nFill the following info of the new Nurse: ";

    string name;
    cout<<"\nName: "; cin>>name;

    int age;
    cout<<"\nAge: "; cin>>age;
    
    string sex;
    cout<<"\nGender: "; cin>>sex;
    
    string address;
    cout<<"\nAddress: "; cin>>address;

    string phoneNumber;
    cout<<"\nPhonenumber: "; cin>>phoneNumber;
    
    string email;
    cout<<"\nEmail: "; cin>>email;
    
    string Speciality;
    cout<<"\nSpeciality: "; cin>>Speciality;

    long long ID_Nurse;
    cout<<"\nID: "; cin>>ID_Nurse;

    Nurses[ID_Nurse] = Nurse(name,age,sex,address,phoneNumber,email,Speciality,ID_Nurse);
}

void removeNurse(map <long long, Nurse> &Nurses){
    int ID;
    cout<<"\nEnter the ID of the nurse need to be deleted: "; cin>>ID;
    Nurses.find(ID) == Nurses.end() ? cout<<"\nIncorrect ID, pass!" : cout<<"The nurse: "<<ID<<" has been removed";
}

void displayNurse(map <long long, Nurse> &Nurses){
    for(auto &i: Nurses){
        i.second.display();
    }
}


int main(){
    map <long long, Doctor> Doctors;
    addDoctor(Doctors);
    displayDoctor(Doctors);

    return 0;
}