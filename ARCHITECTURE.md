# Architecture Documentation

## Project Overview

Hospital Management System is an educational project that applies Object-Oriented Programming (OOP) principles in C++.

## General Structure

```
┌─────────────────────────────────────┐
│       Hospital (Merkez Sınıf)       │
├─────────────────────────────────────┤
│ - patients: vector<Patient>         │
│ - doctors: vector<Doctor>           │
│ - appointments: vector<Appointment> │
└──────────────┬──────────────────────┘
               │
      ┌────────┴─────────┬──────────────┐
      │                  │              │
   ┌──▼──────┐    ┌──────▼────┐   ┌────▼────┐
   │ Patient │    │   Doctor   │   │Appointment
   └─────────┘    └────────────┘   └─────────┘
        │              │
        │              │
        └──────┬───────┘
               │
            ┌──▼─────┐
            │ Person  │ (Base Class)
            └─────────┘
```

## Class Hierarchy

### Person (Base Class)
**Responsibilities:**
- Store person information (ID, name)
- Provide basic getter/setter methods

**Properties:**
```cpp
- id: int
- name: string
+ getId(): int
+ setId(int): void
+ getName(): string
+ setName(string): void
+ printInfo(): void (virtual)
```

### Doctor (Derived from Person)
**Responsibilities:**
- Manage doctor information
- Track patients

**Additional Properties:**
```cpp
- specialty: string
- patients: vector<Patient>
+ getSpecialty(): string
+ setSpecialty(string): void
+ addPatient(Patient): void
+ getPatients(): vector<Patient>
```

### Patient (Derived from Person)
**Responsibilities:**
- Manage patient information
- Store medical history (age, illness)

**Additional Properties:**
```cpp
- age: int
- illness: string
+ getAge(): int
+ setAge(int): void
+ getIllness(): string
+ setIllness(string): void
```

### Appointment
**Responsibilities:**
- Store appointment information
- Manage patient-doctor relationship

**Properties:**
```cpp
- patient: Patient
- doctor: Doctor
- date: string
+ getPatient(): Patient
+ setPatient(Patient): void
+ getDoctor(): Doctor
+ setDoctor(Doctor): void
+ getDate(): string
+ setDate(string): void
```

### Hospital (Manager Class)
**Responsibilities:**
- Manage all patients
- Manage all doctors
- Manage all appointments
- Handle search and list operations

**Properties:**
```cpp
- patients: vector<Patient>
- doctors: vector<Doctor>
- appointments: vector<Appointment>
+ addPatient(Patient): void
+ addDoctor(Doctor): void
+ addAppointment(Appointment): void
+ showAllPatients(): void
+ showAllDoctors(): void
+ showAllAppointments(): void
+ findPatient(int): Patient*
+ findDoctor(int): Doctor*
```

## Data Flow

### Add Patient Flow
```
main.cpp (input) 
    ↓
Hospital::addPatient(Patient)
    ↓
Add to patients vector
```

### Create Appointment Flow
```
main.cpp (patient & doctor selection)
    ↓
Create Appointment
    ↓
Hospital::addAppointment(Appointment)
    ↓
Add to appointments vector
```

### List Flow
```
Hospital::showAll*() methods
    ↓
Loop through vector
    ↓
Call printInfo() for each element (polymorphism)
    ↓
Display on screen
```

## OOP Principles Application

### 1. Inheritance
- **Base Class:** Person
- **Derived Classes:** Doctor, Patient
- **Purpose:** Consolidate common properties, reduce code duplication

### 2. Polymorphism
- **Virtual Functions:** `printInfo()` method
- **Purpose:** Call methods of different classes through the same interface
- **Usage:** Correct version is selected at runtime

### 3. Encapsulation
- **Access Controls:** private, public
- **Getter/Setter Methods:** Control data access
- **Purpose:** Make external code independent of internal representation changes

### 4. Abstraction
- **Hide Complex Details:** Hospital class hides vector details
- **Simple Interface:** Simple methods like addPatient(), showAllPatients()
- **Purpose:** Make user code easy to understand

## Design Decisions

1. **Vector Usage:** STL vector chosen for dynamic array sizing
2. **Value Semantics:** Patient and doctor stored by value in Appointment (not reference)
3. **Pointer Return:** findPatient() and findDoctor() return pointers (null check possible)
4. **Forward Declaration:** Patient forward declared in Doctor class (avoid circular dependency)

## Improvement Suggestions

1. **Database Integration:** Replace vectors with SQL database
2. **Exception Handling:** Add try-catch blocks
3. **Input Validation:** Add input verification mechanisms
4. **Search Functions:** Search by different criteria
5. **Doctor Scheduling:** Doctor class should maintain Schedule
6. **Notification System:** Appointment reminders
7. **Report Generation:** PDF or CSV output

## File Descriptions

| File | Description |
|------|------------|
| Person.h/cpp | Base class definition |
| Doctor.h/cpp | Doctor class |
| Patient.h/cpp | Patient class |
| Appointment.h/cpp | Appointment class |
| Hospital.h/cpp | Hospital manager class |
| main.cpp | Program entry point and menu |

---

**Architecture Documentation Version:** 1.0
**Last Updated:** December 2025
