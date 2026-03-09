#include <iostream>
#include <fstream>
using namespace std;

class Customer {
public:
    string id;
    string name;
    string phone;

    void addCustomer() {
        string existingID, existingName, existingPhone;

        cout << "\nEnter Customer ID: ";
        cin >> id;

        ifstream checkFile("customers.txt");

        while (checkFile >> existingID >> existingName >> existingPhone) {
            if (existingID == id) {
                cout << "\nCustomer ID already exists! Please try again.\n";
                checkFile.close();
                return;
            }
        }

        checkFile.close();

        cout << "Enter Name: ";
        cin >> name;

        while (true) {
            cout << "Enter Phone: ";
            cin >> phone;

            if (phone.length() == 10) {
                break;
            } else {
                cout << "Invalid phone number.\n";
            }
        }

        ofstream file("customers.txt", ios::app);
        file << id << " " << name << " " << phone << endl;
        file.close();

        cout << "\nCustomer added successfully!\n";
    }
};

class Interaction {
public:
    string customerId;
    string note;

    void addInteraction() {
        cout << "\nEnter Customer ID: ";
        cin >> customerId;
        cin.ignore();

        cout << "Enter Interaction Note: ";
        getline(cin, note);

        ofstream file("interactions.txt", ios::app);
        file << customerId << " - " << note << endl;
        file.close();

        cout << "\nInteraction saved!\n";
    }
};

void viewCustomers() {
    ifstream file("customers.txt");
    string id, name, phone;

    cout << "\n Customer List \n";

    while (file >> id >> name >> phone) {
        cout << "ID: " << id
             << " | Name: " << name
             << " | Phone: " << phone << endl;
    }

    file.close();
}

void viewInteractions() {
    ifstream file("interactions.txt");
    string line;

    cout << "\n Interaction History \n";

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

int main() {
    Customer c;
    Interaction i;
    int choice;

    do {
        cout << "\nSIMPLE CRM SYSTEM\n";
        cout << "1. Add Customer\n";
        cout << "2. View Customers\n";
        cout << "3. Add Interaction\n";
        cout << "4. View Interactions\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                c.addCustomer();
                break;
            case 2:
                viewCustomers();
                break;
            case 3:
                i.addInteraction();
                break;
            case 4:
                viewInteractions();
                break;
            case 5:
                cout << "\nExiting...\n";
                break;
            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}