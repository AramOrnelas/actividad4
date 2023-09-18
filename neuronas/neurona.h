#ifndef NEURONA_H
#define NEURONA_H
#include <iostream>
#include <list>

class Neurona {
private:
    int id;
    double voltaje;
    int posX;
    int posY;
    int red;
    int green;
    int blue;

public:
    Neurona(int id, double voltaje, int posX, int posY, int red, int green, int blue)
        : id(id), voltaje(voltaje), posX(posX), posY(posY), red(red), green(green), blue(blue) {}

    void print() const {
        std::cout << "Neurona " << id << ": Voltaje=" << voltaje << ", Posición=(" << posX << ", " << posY << "), RGB=(" << red << ", " << green << ", " << blue << ")" << std::endl;
    }
};

class AdministradorNeuronas {
private:
    std::list<Neurona> neuronas;

public:
    void agregar_inicio(Neurona neurona) {
        neuronas.push_front(neurona);
    }

    void agregar_final(Neurona neurona) {
        neuronas.push_back(neurona);
    }

    void mostrar() {
        for (const auto& neurona : neuronas) {
            neurona.print();
        }
    }
};

#endif // NEURONA_H
