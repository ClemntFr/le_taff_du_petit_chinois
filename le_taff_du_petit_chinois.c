#include <stdio.h>


/*
int arr[] = {1, 2, 3};
int len = *(&arr+1)-arr;
*/

int len(int list[]) {
  int i = 0;
  while (list[i] != '\0') {i++;}
  return i;
}

void print_list(int* list) {
  printf("[");
  for (int i=0; i < len(list)-1; i++) {
    printf("%d, ", list[i]);
  }
  printf("%d]\n", list[len(list)-1]);
}

void permuter(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void tu_sert_a_rien_mais_vasy_les_conventions_tu_connais_et_oui_le_nombre_de_caracteres_de_la_ligne_depasse_la_convention_je_sais_tu_te_demerdes_pour_changer_le_nom(int l[], int* i, int* j, int pivot, int d) {
  while (l[*i] <= l[pivot] && *i < d) {
    (*i)++;
  }
  while (l[*j] > l[pivot]) {
    (*j)--;
  }
  if (*i < *j) {
    permuter(&l[*i], &l[*j]);
  }
}

void tri_rapide(int l[], int p, int d) {
  int pivot, i, j;
  if (p < d) {
    pivot = p;
    i = p;
    j = d;
    while (i<j) {
      tu_sert_a_rien_mais_vasy_les_conventions_tu_connais_et_oui_le_nombre_de_caracteres_de_la_ligne_depasse_la_convention_je_sais_tu_te_demerdes_pour_changer_le_nom(l, &i, &j, pivot, d);
    }
    permuter(&l[pivot], &l[j]);
    tri_rapide(l, p, j-1);
    tri_rapide(l, j+1, d);
  }
}

void trier(int list[]) {
  tri_rapide(list, 0, len(list)-1);
}

int main() {
  int list[] = {1, 2, 3, 4, 8, 4, 69, 42, 314159265, 2, 6, 4, 1, 3, 2, 1};
  printf("Avant : \n\t");
  print_list(list);
  trier(list);
  printf("\nApres : \n\t");
  print_list(list);
  printf("\nTa vu c beau\n");
  return 1;
}
