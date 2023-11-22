#include <iostream>
#include <string>

using namespace std;
string& s6(string a) {return a;}
int main(void)
{
    string a = "helloo";

    std::string linha;
    int linhas = 0;

    while(std::getline(std::cin, linha))
        linhas++;

    std::cout << linhas << std::endl;
}
