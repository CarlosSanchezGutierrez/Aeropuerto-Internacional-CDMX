// user.h
#Ingresar con un usuario que no existe. Tu solución debe indicar que el usuario no existe y no continuar.

class User {
private:
    std::string name;
    std::string email;
    std::string phoneNumber;
    static std::set<std::string> users;

public:
    // Constructors
    User() : name(""), email(""), phoneNumber("") {}
    User(const std::string& n, const std::string& e, const std::string& pn)
        : name(n), email(e), phoneNumber(pn) {
            users.insert(e);
        }

    // Getters
    std::string getName() const { return name; }
    std::string getEmail() const { return email; }
    std::string getPhoneNumber() const { return phoneNumber; }

    // Method to check if a user exists
    static bool userExists(const std::string& email) {
        return users.find(email) != users.end();
    }

    // Setters
    void setName(const std::string& n) { name = n; }
    void setEmail(const std::string& e) { email = e; }
    void setPhoneNumber(const std::string& pn) { phoneNumber = pn; }
};

#endif // USER_H

// user.cpp
#include "user.h"
std::set<std::string> User::users;

// main.cpp
#include <iostream>
#include "user.h"

int main() {
    // Create some users
    User user1("Shazam", "shazam@hotmail.com", "833-777-888");
    User user2("Barak Obama", "obama2014@tec.mx", "4179-512-87");

    // Try to create a user with a non-existing email
    if (!User::userExists("miketyson@yahoo.zx")) {
        User user3("Mike Tyson", "miketyson@yahoo.zx", "333-666-1234");
        std::cout << "User 'miketyson@yahoo.zx' created successfully" << std::endl;
    } else {
        std::cout << "Error: User 'miketyson@yahoo.zx' does not exist" << std::endl;
    }

    // Print user information
    std::cout << "User 1: " << user1.getName() << ", "
                            << user1.getEmail() << ", "
                            << user1.getPhoneNumber() << std::endl;
    std::cout << "User 2: " << user2.getName() << ", "
                            << user2.getEmail() << ", "
                            << user2.getPhoneNumber() << std::endl;

    return 0;
}
