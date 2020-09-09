#include <iostream>

using namespace std;

int main()
{
   string veiculo = "Carro";
   string *pv;
   pv = &veiculo; // Ponteiro pv recebe o endereço da variavel veiculo;
   cout << pv << "\n" << &veiculo;

   *pv= "Moto"; // No endereço apontado por ponteiro pv adicione o valor moto.
    return 0;
}
