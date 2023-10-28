#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> employeeDatabase;

    // Add employees to the database
    employeeDatabase[101] = "John Smith";
    employeeDatabase[102] = "Alice Johnson";
    employeeDatabase[103] = "Bob Williams";
    // Add more employees as needed

    while (true) {
        int choice;
        std::cout << "1. Search for an employee by ID" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            int employeeID;
            std::cout << "Enter the employee ID: ";
            std::cin >> employeeID;

            // Search for the employee in the database
            auto it = employeeDatabase.find(employeeID);

            if (it != employeeDatabase.end()) {
                std::cout << "Employee ID: " << it->first << ", Name: " << it->second << std::endl;
            } else {
                std::cout << "Employee not found." << std::endl;
            }
        } else if (choice == 2) {
            std::cout << "Exiting the program." << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
