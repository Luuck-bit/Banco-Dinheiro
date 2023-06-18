#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <string>

int sacar, depositar, guardar, investir;
char SN;
std::string nome;
std::string newsenha;
std::string loginuser;
std::string senha;

void cadastro(){
    do
    {
    std::cout << "Informe um nome de Usuário: " << std::endl;
    std::cin >> nome;
    std::cout << "agora, informe sua senha: " << std::endl;
    std::cin >> newsenha;
    std::cout << "O nome e senha informado está correto? (S/N)";
    std::cin >> SN;
    SN = toupper(SN);
    }while (SN != 'S');
    
}


void login(){
    do
    {
        std::cout << "Informe seu nome de usuário: " << std::endl;
        std::cin >> loginuser;
        std::cout << "Informe sua senha: " << std::endl;
        std::cin >> senha;
        std::cout << "as informações informadas estão corretas? " << std::endl;
        std::cin >> SN;
        SN = toupper(SN);
    } while (SN != 'S');
    
}

int main(void){
    char realizarca;

    std::cout << "SediCard'e' sempre com você!" << std::endl;
    std::cout << "É sua primeira vez utilizando nosso Banco? (S/N)" << std::endl;
    std::cin >> realizarca;
    realizarca = toupper(realizarca);
    if (realizarca == 'S')
    {
        cadastro();
    }
    else 
    {
        std::cout << "Informe seu login e senha já cadastrados: " << std::endl;
        login();
    }
    

}