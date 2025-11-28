// user.h
#Agregar usuarios
class Usuario {
private:
    std::string nombre;
    std::string correo;
    std::string numeroTelefono;

public:
    // Constructores
    Usuario() : nombre(""), correo(""), numeroTelefono("") {}
    Usuario(const std::string& n, const std::string& e, const std::string& pn)
        : nombre(n), correo(e), numeroTelefono(pn) {}

    // Getters
    std::string getNombre() const { return nombre; }
    std::string getCorreo() const { return correo; }
    std::string getNumeroTelefono() const { return numeroTelefono; }

    // Setters
    void setNombre(const std::string& n) { nombre = n; }
    void setCorreo(const std::string& e) { correo = e; }
    void setNumeroTelefono(const std::string& pn) { numeroTelefono = pn; }
};

// main.cpp

#include <iostream>
#include "user.h"

int main() {
    // Crear tres nuevos usuarios
    Usuario usuario1("Shazam", "shazam@hotmail.com", "833-777-888");
    Usuario usuario2("Barak Obama", "obama2014@tec.mx", "4179-512-87");
    Usuario usuario3("Mike Tyson", "miketyson@yahoo.zx", "333-666-1234");

    // Imprimir información de usuario
    std::cout << "Usuario 1: " << usuario1.getNombre() << ", "
                               << usuario1.getCorreo() << ", "
                               << usuario1.getNumeroTelefono() << std::endl;
    std::cout << "Usuario 2: " << usuario2.getNombre() << ", "
                               << usuario2.getCorreo() << ", "
                               << usuario2.getNumeroTelefono() << std::endl;
    std::cout << "Usuario 3: " << usuario3.getNombre() << ", "
                               << usuario3.getCorreo() << ", "
                               << usuario3.getNumeroTelefono() << std::endl;

    return 0;
}
