#include "Patient.h"

using namespace std;

Patient::Patient() : Person(), age(0), illness("") {}

Patient::Patient(int id, string name, int age, string illness) 
    : Person(id, name), age(age), illness(illness) {}

int Patient::getAge() {
    return age;
}

void Patient::setAge(int age) {
    this->age = age;
}

string Patient::getIllness() {
    return illness;
}

void Patient::setIllness(string illness) {
    this->illness = illness;
}

void Patient::printInfo() {
    cout << "Patient - ID: " << getId() << ", Name: " << getName() 
         << ", Age: " << age << ", Illness: " << illness << endl;
}
