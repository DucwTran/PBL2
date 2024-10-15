#include"person.h"

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
