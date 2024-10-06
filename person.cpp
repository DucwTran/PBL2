#include<bits/stdc++.h>
#include"person.h"
using namespace std;

Person::Person(string name, int age, string sex, string address, string phoneNumber, string email){
    this->name = name;
    this->age = age;
    this->sex = sex;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->email = email;

}

Person::~Person(){

}
void Person::display(){
    cout<<"Thong tin ca nhan: "<<endl;
    cout<<"Ten: "<<name<<endl;
    cout<<"Tuoi: "<<age<<endl;
    cout<<"Gioi tinh: "<<sex<<endl;
    cout<<"Dia chi: "<<address<<endl;
    cout<<"SDT: "<<phoneNumber<<endl;
    cout<<"Email: "<<email<<endl;

}

int Person::getAge(){
    return age;
}
string Person::getName(){
    return name;
}
string Person::getSex(){
    return sex;
}
string Person::getAddress(){
    return address;
}
string Person::getPhoneNumber(){
    return phoneNumber;
}
string Person::getEmail(){
    return email;
}


void Person::setAge(int age){
    this->age = age;
}
void Person::setName(string name){
    this->name = name;
}
void Person::setSex(string sex){
    this->sex = sex;
}
void Person::setAddress(string address){
    this->address = address;
}
void Person::setPhoneNumber(string phoneNumber){
    this->phoneNumber = phoneNumber;
}
void Person::setEmail(string email){
    this->email = email;
}
