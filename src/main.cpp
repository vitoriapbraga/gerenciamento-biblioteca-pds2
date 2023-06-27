#include "interface.cpp"

#include <iostream>

int main() {
    int escolha;

    do {
        std::cout << "1 - Logar admnistrador" << std::endl;
        std::cout << "2 - Cadastrar usuario" << std::endl;
        std::cout << "3 - Sair" << std::endl;
        std::cout << "Escolha: ";
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                std::cout << "Logar admnistrador" << std::endl;
                loginAdministrador();
                break;
            case 2:
                std::cout << "Cadastrar usuario" << std::endl;
                cadastrarUsuario();
                break;
            case 3:
                std::cout << "Sair" << std::endl;
                break;
            default:
                std::cout << "Opcao invalida" << std::endl;
                break;
        }
    } while (true);
    
    return 0;
}
