#include <iostream>
#include <string>

struct Customer {
    std::string name;
    double balance;
    std::string lastTransaction;
};

void displayCustomer(const Customer& customer) {
    std::cout << "Name: " << customer.name << std::endl;
    std::cout << "Balance: " << customer.balance << std::endl;
    std::cout << "Last Transaction: " << customer.lastTransaction << std::endl;
}

int main() {
    Customer customer1 = {"John Doe", 1000.0, "Purchased item"};
    Customer customer2 = {"Jane Smith", 500.0, "Transferred money"};

    std::cout << "Customer 1 Details:" << std::endl;
    displayCustomer(customer1);

    std::cout << "\nCustomer 2 Details:" << std::endl;
    displayCustomer(customer2);

    return 0;
}