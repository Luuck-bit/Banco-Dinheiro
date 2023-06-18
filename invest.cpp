#include <iostream> //  ferramentas para entrada e saída de dados.
#include <cstdlib> // Ela define várias funções de propósito geral, incluindo gerenciamento de memória dinâmica, geração de números aleatórios, comunicação com o ambiente, aritmética de inteiros, pesquisa, classificação e conversão1
#include <ctime> //  Ela contém definições de funções para obter e manipular informações de data e hora 2. Por exemplo, a função time() retorna o número de segundos desde 00:00 de 1 de Janeiro de 1970 3. 
#include <string> //  fornece a classe std::string para manipular strings.
#include <cctype> // fornece funções para converter entre letras maiúsculas e minúsculas, como tolower() e toupper() 1.

// Utilizar as variáveis fora da função principal vale para todas as classes e funções.
int guardar = 0;
int resgatar;
int quantidade, opcao;
int depositar, sacar, categoria;
int saldo, investir, cardacess, dinlock;
int limite, feedback, opcaoexp; // para não poluir o código visualmente, você pode colocar uma vírgula em var do mesmo tipo.
std::string nome;
char SN, firstinv, investirvalor;
int valor;
std::string invest;

using namespace std;

class Investimento{
private: 

float valorinv;
std::string tipoinv; // string guarda seq de caracteres

public:


void settipo(std::string tipoinv) {
  this->tipoinv = tipoinv;
}

void setvalor(float valorinv) {
 this->valorinv = valorinv;
}

float getvalor() {
  return valorinv;
}

std::string gettipo() {
  return tipoinv;
}



};

class financas{
  private:

  public:
  

void resgatarguard(){
  cout << "1 - Sim" << endl;
  cout << "2 - Não" << endl;
  cin >> resgatar;
  if (resgatar == 1)
  {
    cout << "Quanto deseja resgatar? ";
    cin >> quantidade;
    guardar -= quantidade;
    saldo += quantidade;
  }
  else (resgatar == 2);
  {
    cout << "Certo, até logo." << endl;
  }
}

void investirscr(){
  
  cout << "1 - Tesouro Direto" << endl;
  cout << "2 - CDB" << endl;
  cout << "3 = Ações Empresariais" << endl;
  cout << "4 - Fundos de Investimento" << endl;
  cout << "5 - não desejo Investir " << endl;
  if (invest == 1){

  }
  else if (invest == 2){
    
  }
  else if (invest ==3){
    
  }
  else if (invest ==4){
    
  }
  else{

  }
  
  }
};

int main(void)
{
  financas geral; // nome dado a classe finanças
  Investimento pessoalinvest;
  
  cout << "Olá, bem vindo ao banco SediCards, aqui nós ajudaremos você a Monitorar seu Dinheiro reservado" << endl;
  cout << "Qual seu Nome?" << endl;
  cin >> nome;
	cout << "qual seu saldo atual? :" << endl;
	cin >> saldo;
	do
	{  
		cout << "Seu saldo é de: " << saldo << endl;
		cout << "Que movimentação deseja fazer?: " << endl;
		cout << "1 - Sacar" << endl;
		cout << "2 - Depositar" << endl;
		cout << "3 - Guardar" << endl;
		cout << "4 - Investir" << endl;
		cout << "5 - Cartão de crédito" << endl;
		cout << "6 - Sair" << endl;
		cin >> categoria;


		switch (categoria)
		{

		case 1:
            cout << "Quanto deseja sacar, " << nome << "?" << endl;                
                cin >> sacar;
                if (sacar < saldo){
               saldo -= sacar; 
                }
               else {
                cout << "Lamento, mas não pode sacar mais do que seu Saldo" << endl;
               }
			break;
        case 2: 
            cout << "Quanto deseja Depositar," << nome << "?" << endl;            
                cin >> depositar;
            saldo += depositar;
            break;
             
        case 3:
            
            
              
            cout << "Você deseja vizualizar seu saldo guardado ou Guardar mais? " << endl;
            cout << "1 - Guardar" << endl;
            cout << "2 - Ver dinherio guardado" << endl;
            cin >> dinlock;

            if (dinlock == 1)
            {
              do{
              cout << "Quanto você deseja guardar?" << endl;    
                cin >> guardar;
                 cout << "O valor que você deseja guardar é" << guardar << " , correto? S/N";
                cin >> SN;
                   SN = toupper(SN); 
              }while (SN != 'S');
              saldo -= guardar;
            
            }
            else
            {
              cout << "O total guardado que você tem é de: " << guardar << "Deseja resgatar?" << endl;
              geral.resgatarguard();
            }
            
            
              
              
             break;
        case 4: //investimento sistema
         do{  
        cout << "Quanto deseja Investir?: " << endl;
        cin >> valor;
        pessoalinvest.setvalor(valor);
        cout << "o valor que deseja investir está correto? S/N " << pessoalinvest.getvalor() << endl;  
        cin >> investirvalor;
        investirvalor = toupper(investirvalor);
         }while(investirvalor != 'S'); // são aspas simples, não aspas
         saldo =- investirvalor;
        cout << "No que deseja investir?: " << endl;
        geral.investirscr();
        cin >> invest;
        pessoalinvest.settipo(invest);


        
        
           
           break;
              
        case 5: 
                 srand(time(0));
                  limite = rand() % 1000 + 1;
                 cout << "Deseja acessar seu cartão de crédito? (1 e/ou 2)" << endl;
                 cout << "1 - Sim" << endl;
                 cout << "2 - Não" << endl;
                 cin >> cardacess;
                 
                if (cardacess == 1){
                
                  cout << "Seu cartão SediCards está a caminho!" << endl;
                  cout << "Seu limite é de " << limite << endl;
                } else {
                  cout << "Perfeito, volte quando quiser" << endl;
                  }
                  
                break; 

        case 6: 
        cout << "Saindo..." << endl;
        return 0;
        
                
      default:
			cout << "Informe a movimentação desejada: " << endl;
			break;
		}
	}while (categoria != 6); 


  cout << "O que achou do SediCards? nos avalie de 1 a 5 estrealas:" << endl;
  cout << "1- ٭" << endl;
  cout << "2 - ٭٭" << endl;
  cout << "3 - ٭٭٭" << endl;
  cout << "4 - ٭٭٭٭" << endl;
  cout << "5 - ٭٭٭٭٭" << endl;
  cin >> feedback;
  if (feedback == 1)
  {
    cout << "Iremos melhorar, agradecemos." << endl;
  }
  else if (feedback == 2)
  {
    cout << "Agradecemos o Feedback." << endl;
  }
  else if (feedback == 3)
  {
    cout << "Muito obrigado por usar o Software" << endl;
    cout << "O que te fez gostar do Aplicativo?" << endl;
    cin >> feedback;
  }
  else if (feedback == 4)
  {
    cout << "Agredecemos muito pelo feedback positivo, desfrute mais do software" << endl;
    cout << "O que te fez gostar do Aplicativo?" << endl;
    cin >> feedback;
  }
  else (feedback == 5);
  {
    cout << "É gratificante saber que adorou o Software, atualizações estão a caminho para seu uso!" << endl;
    cout << "O que te fez gostar do Aplicativo?" << endl;
    cin >> feedback;
  }
  
  
  
  return 0;


  
}


 