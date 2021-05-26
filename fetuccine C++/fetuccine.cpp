#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int i = 0, t1 = 0, t2 = 0, n = 0, termo = 0;
  cout << "Exercicio Fetuccine\n\n";
  cout << "Digite o primeiro termo\n\n";
  cin >> t1;
  cout << "\nDigite o segundo termo\n\n";
  cin >> t2;
  cout << "\nDigite qual a posicao do termo desejado\n\n ";
  cin >> termo;
  cout << "Termo 1: " << t1 << "\n";
  cout << "Termo 2: " << t2 << "\n";
  i = 3;

  while (3 <= termo)
  {
    if (t2 % 2 == 0)
    {
      n = t2 - t1;
    }
    else
    {
      n = t2 + t1;
    }

    cout << "Termo " << i << ": " << n << "\n";

    t1 = t2;
    t2 = n;
    i++;
    termo = termo - 1;
  }

  return EXIT_SUCCESS;
}
