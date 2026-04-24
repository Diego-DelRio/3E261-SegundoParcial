#include <iostream>
#include <Foco.hpp>

int main(int argc, char* argv[]) {
    Foco foquito;

    foquito.Encender();
    foquito.Apagar();

    std::cout
    << "Estado Foco: "
    << foquito.LeerEstado()
    <<std::endl;
    return 0;
}