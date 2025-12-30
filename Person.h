using namespace std;

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
private:
    int id;
    string name;

public:
    Person();
    Person(int id, string name);
    
    int getId();
    void setId(int id);
    
    string getName();
    void setName(string name);
    
    
    virtual void printInfo();
    virtual ~Person();
};

#endif

