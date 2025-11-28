// user.h
#Ingresar con un usuario existente. Tu solución debe dar acceso al sistema.

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
