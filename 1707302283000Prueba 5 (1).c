#include <iostream>
#include <vector>
#include <string>
#Buscar un vuelo por destino y/o fecha

class Vuelo {
public:
    Vuelo(const std::string& aerolinea, const std::string& numero, const std::string& destino, const std::string& fechaSalida)
        : aerolinea(aerolinea), numero(numero), destino(destino), fechaSalida(fechaSalida) {}

    const std::string& getAerolinea() const { return aerolinea; }
    const std::string& getNumero() const { return numero; }
    const std::string& getDestino() const { return destino; }
    const std::string& getFechaSalida() const { return fechaSalida; }

private:
    std::string aerolinea;
    std::string numero;
    std::string destino;
    std::string fechaSalida;
};

// Clase BúsquedaVuelos: gestiona una lista de vuelos y ofrece métodos para añadir y buscar vuelos
class BúsquedaVuelos {
public:
    void addVuelo(const Vuelo& vuelo) { vuelos.push_back(vuelo); }

    // Método buscarVuelos: busca vuelos por destino y/o fecha de salida
    std::vector<Vuelo> buscarVuelos(const std::string& destino, const std::string& fecha) const {
        std::vector<Vuelo> resultados;

        for (const Vuelo& vuelo : vuelos) {
            if ((destino == "" || vuelo.getDestino() == destino) &&
                (fecha == "" || vuelo.getFechaSalida() == fecha)) {
                resultados.push_back(vuelo);
            }
        }

        return resultados;
    }

private:
    std::vector<Vuelo> vuelos;
};

int main() {
    BúsquedaVuelos búsquedaVuelos;

    // Añadimos vuelos a la lista de vuelos
    búsquedaVuelos.addVuelo(Vuelo("Delta", "123", "New York", "2023-05-01"));
    búsquedaVuelos.addVuelo(Vuelo("American Airlines", "456", "Los Angeles", "2023-06-15"));
    búsquedaVuelos.addVuelo(Vuelo("United Airlines", "789", "San Francisco", "2023-07-20"));
    búsquedaVuelos.addVuelo(Vuelo("Delta", "321", "New York", "2023-08-10"));

    // Buscamos vuelos con destino "New York" y sin fecha específica
    std::vector<Vuelo> vuelosNewYork = búsquedaVuelos.buscarVuelos("New York", "");

    std::cout << "Vuelos a New York:" << std::endl;
    for (const Vuelo& vuelo : vuelosNewYork) {
        std::cout << "- " << vuelo.getAerolinea() << " " << vuelo.getNumero()
                  << " (" << vuelo.getFechaSalida() << ")" << std::endl;
    }

    // Buscamos vuelos con fecha de salida "2023-08-10" y sin destino específico
    std::vector<Vuelo> vuelosAgosto10 = búsquedaVuelos.buscarVuelos("", "2023-08-10");
