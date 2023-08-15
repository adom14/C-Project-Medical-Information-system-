#include <iostream>
#include <vector>
#include <string>

struct Patient {
    std::string firstName;
    std::string lastName;
    int age;
    std::string diagnosis;
};

void addPatient(std::vector<Patient>& patients) {
    Patient newPatient;
    std::cout << "Enter first name: ";
    std::cin >> newPatient.firstName;
    std::cout << "Enter last name: ";
    std::cin >> newPatient.lastName;
    std::cout << "Enter age: ";
    std::cin >> newPatient.age;
    std::cout << "Enter diagnosis: ";
    std::cin >> newPatient.diagnosis;

    patients.push_back(newPatient);
    std::cout << "Patient added successfully.\n";
}

void displayPatients(const std::vector<Patient>& patients) {
    std::cout << "Patient List:\n";
    for (size_t i = 0; i < patients.size(); ++i) {
        const Patient& patient = patients[i];
        std::cout << "Name: " << patient.firstName << " " << patient.lastName << "\n";
        std::cout << "Age: " << patient.age << "\n";
        std::cout << "Diagnosis: " << patient.diagnosis << "\n";
        std::cout << "-------------------------\n";
    }
}

int main() {
    std::vector<Patient> patients;

    while (true) {
        std::cout << "Medical Information System\n";
        std::cout << "1. Add Patient\n";
        std::cout << "2. Display Patients\n";
        std::cout << "3. Exit\n";
        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addPatient(patients);
                break;
            case 2:
                displayPatients(patients);
                break;
            case 3:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

