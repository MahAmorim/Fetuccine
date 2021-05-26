#include <cstdlib>
#include <iostream>

using namespace std;

int fet(int termo, int n1, int n2);

int main(int argc, char *argv[])
{
  int n1 = 0, n2 = 0, termo = 0;

  cout << "Exercicio Fetuccine: "
       << "\n\n";
  cout << "Digite o primeiro valor: "
       << "\n";
  cin >> n1;
  cout << "\n"
       << "Digite o segundo valor: "
       << "\n";
  cin >> n2;
  cout << "\n"
       << "Digite qual a posicao do termo desejado: "
       << "\n ";
  cin >> termo;

  cout << "Termo : " << fet(termo, n1, n2) << "\n\n";

  return 0;
}

int fet(int termo, int n1, int n2)
{
  if (termo == 1)
  {
    return n1;
  }
  if (termo == 2)
  {
    return n2;
  }
  if (termo % 2 == 0)
  {
    return fet(termo - 1, n1, n2) - fet(termo - 2, n1, n2);
  }
  else
  {
    return fet(termo - 1, n1, n2) + fet(termo - 2, n1, n2);
  }
}