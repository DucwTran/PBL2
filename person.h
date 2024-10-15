#ifndef PERSON
#define PERSON

using namespace std;
#include <string>
#include <iostream>

class Person{
protected:
    string name;
    int age;
    string sex;
    string address;
    string phoneNumber;
    string email;

public:
    Person(string name = "", int age = 0, string sex = "", string address = "", string phoneNumber = "", string email = "");
    ~Person();
    virtual void display();
};

#endif