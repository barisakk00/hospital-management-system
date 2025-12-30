#include "Appointment.h"

using namespace std;

Appointment::Appointment() : patient(Patient()), doctor(Doctor()), date("") {}

Appointment::Appointment(Patient patient, Doctor doctor, string date) 
    : patient(patient), doctor(doctor), date(date) {}

Patient Appointment::getPatient() {
    return patient;
}

void Appointment::setPatient(Patient patient) {
    this->patient = patient;
}

Doctor Appointment::getDoctor() {
    return doctor;
}

void Appointment::setDoctor(Doctor doctor) {
    this->doctor = doctor;
}

string Appointment::getDate() {
    return date;
}

void Appointment::setDate(string date) {
    this->date = date;
}

void Appointment::printInfo() {
    cout << "Appointment - Patient: " << patient.getName() << ", Doctor: " << doctor.getName() 
         << ", Date: " << date << endl;
}
