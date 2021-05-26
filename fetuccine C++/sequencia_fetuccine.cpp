#include <cstdlib>
#include <iostream>

using namespace std;

//6-	Mostrar a s�rie de FETUCCINE at� o termo informado pelo usu�rio ( o termo da s�rie deve ser maior que 3)  , e calcular a  omat�ria dos termos e mostrar.

int main(int argc, char *argv[])
{
  int i = 3, n1 = 0, n2 = 0, n = 0, termo = 0, soma = 0;
  cout << "Exercicio Fetuccine"
       << "\n\n";
  cout << "Digite o primeiro termo: ";
  cin >> n1;
  cout << "\n"
       << "Digite o segundo termo: ";
  cin >> n2;
  cout << "\n"
       << "Digite qual a posicao do termo desejado: ";
  cin >> termo;

  cout << "\n\n"
       << "Termo 1: " << n1 << "\n";
  cout << "Termo 2: " << n2 << "\n";

  while (termo <= 3)
  {
    cout << "Redigite";
    cin >> termo;
  }

  while (3 <= termo)
  {
    if (n2 % 2 == 0)
    {
      n = n2 - n1;
    }
    else
    {
      n = n2 + n1;
    }

    cout << "Termo " << i << ": " << n << "\n";

    n1 = n2;
    n2 = n;
    i++;
    termo = termo - 1;
  }

  while (1 <= termo)
  {

    soma = n1 + n2;
    n1 = n2;
    n2 = n;
    i++;
    termo = termo - 1;
    soma = soma + (n - 1);
  }

  cout << "\n"
       << "Somatoria: " << soma << "\n\n";

  return 0;
}
