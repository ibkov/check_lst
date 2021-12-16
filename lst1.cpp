#include "list_easy.h"

void itc_even_index_list(const vector <int> &mass, vector <int> &mass2)
{
  if (!mass || !mass2)
    return;
  for (int i == 0; i < mass.size(); i++)
    if (mass[i] % 2 == 0)
      mass2.push_back(mass[i]);
}
