#include "Person.h"

using namespace std;

Person::Person() : id(0), name("") {}

Person::Person(int id, string name) : id(id), name(name) {}

int Person::getId() {
    return id;
}

void Person::setId(int id) {
    this->id = id;
}

string Person::getName() {
    return name;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::printInfo() {
    cout << "ID: " << id << ", Name: " << name << endl;
}

Person::~Person() {}
