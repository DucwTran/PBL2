#include<bits/stdc++.h>
using namespace std;

#ifndef PERSON
#define PERSON

class Person{
protected:
    string name;
    int age;
    string sex;
    string address;
    string phoneNumber;
    string email;

public:
    Person(string name, int age, string sex, string address, string phoneNumber, string email);
    ~Person();

    virtual void display();
    int getAge();
    string getName();
    string getSex();
    string getAddress();
    string getPhoneNumber();
    string getEmail();


    void setAge(int age);
    void setName(string name);
    void setSex(string sex);
    void setAddress(string address);
    void setPhoneNumber(string PhoneNumber);
    void setEmail(string email);


};

#endif