#include <bits/stdc++.h>

using namespace std;

int main()
{
   int idade1, idade2, media;
   string nome1, nome2;

   cout << "Dados da primeira pessoa:" << endl;
   cout << "Nome: ";
   getline (cin, nome1);
   cout << "Idade: ";
   cin >> idade1;

   cout << "Dados da segunda pessoa:" << endl;
   cout << "Nome: ";
   cin.ignore(INT_MAX, '\n');
   getline (cin, nome2);
   cout << "Idade: ";
   cin >> idade2;

   media = (idade1 + idade2) / 2;


   cout << " A media de " << nome1 << " e " << nome2 <<  " eh de " << media << " anos " << endl;


    return 0;
}
