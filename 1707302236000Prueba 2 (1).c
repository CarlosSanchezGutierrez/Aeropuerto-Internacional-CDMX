// user.h
#Agregar un usuario existente. Tu solución debe indicar que el usuario ya existe.

class User {
private:
    std::string nombre;
    std::string email;
    std::string numero de telefono;
    static std::set<std::string> users;

public:
    // Constructors
    User() : nombre(""), email(""), numero de telefono("") {}
    User(const std::string& n, const std::string& e, const std::string& pn)
        : name(n), email(e), numero de telefono(pn) {
            if (users.find(e) != users.end()) {
                std::cout << "Error: Este usuario con correo " << e << " ya existe." << std::endl;
            } else {
                users.insert(e);
            }
        }

    // Getters
    std::string getNombre() const { return name; }
    std::string getEmail() const { return email; }
    std::string getNumero de telefono() const { return numero de telefono; }

    // Setters
    void setNombre(const std::string& n) { name = n; }
    void setEmail(const std::string& e) { email = e; }
    void setNumero de telefono(const std::string& pn) { numero de telefono = pn; }
};

#endif // USER_H

// user.cpp
#include "user.h"
std::set<std::string> User::users;

// main.cpp
#include <iostream>
#include "user.h"

int main() {
    // Create a new user
    User user1("Shazam", "shazam@hotmail.com", "833-777-888");

    // Try to create a user with an existing email
    User user2("Barak Obama", "obama2014@tec.mx", "4179-512-87");

    // Create another new user
    User user3("Mike Tyson", "miketyson@yahoo.zx", "333-666-1234");

    // Print user information
    std::cout << "User 1: " << user1.getNombre() << ", "
                            << user1.getEmail() << ", "
                            << user1.getNumero de telefono() << std::endl;
    std::cout << "User 2: " << user3.getNombre() << ", "
                            << user3.getEmail() << ", "
                            << user3.getNumero de telefono() << std::endl;

    return 0;
}
