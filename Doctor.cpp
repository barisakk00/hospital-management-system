#include "Doctor.h"
#include "Patient.h"

using namespace std;

Doctor::Doctor() : Person(), specialty("") {}

Doctor::Doctor(int id, string name, string specialty) 
    : Person(id, name), specialty(specialty) {}

string Doctor::getSpecialty() {
    return specialty;
}

void Doctor::setSpecialty(string specialty) {
    this->specialty = specialty;
}

void Doctor::addPatient(Patient p) {
    patients.push_back(p);
}

vector<Patient> Doctor::getPatients() {
    return patients;
}

void Doctor::printInfo() {
    cout << "Doctor - ID: " << getId() << ", Name: " << getName() 
         << ", Specialty: " << specialty << ", Patient Count: " << patients.size() << endl;
}
