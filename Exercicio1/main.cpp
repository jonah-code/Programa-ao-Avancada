#include <iostream>

using namespace std;

int main()
{
   string veiculo = "Carro";
   string *pv;
   pv = &veiculo; // Ponteiro pv recebe o endere�o da variavel veiculo;
   cout << pv << "\n" << &veiculo;

   *pv= "Moto"; // No endere�o apontado por ponteiro pv adicione o valor moto.
    return 0;
}
