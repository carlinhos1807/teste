#include <iostream>

int main(void)
{
    std::string linha;
    int linhas = 0;

    while(std::getline(std::cin, linha))
        linhas++;

    std::cout << linhas << std::endl;

    // Adicionando uma variável não utilizada para gerar um aviso
    int variavel_nao_utilizada;
    return 0;
}
