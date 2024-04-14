#include <stdio.h>
/*
Создать текстовый файл с записями следующего вида:
Иванов Петр Сергеевич 1975
Сидоров Николай Андреевич 1981
….
Воробьянинов Ипполит Матвеевич 1978

  Прочитать данные из этого файла и записать в другой только те строки, которые
относятся к родившимся позднее 1980 года.

  */
int main(void) {
  int i, n, m = 0;

  FILE *f1;
  char m1[100], m2[100], m3[100], m4[100];
  f1 = fopen("all.txt", "r");
  FILE *f2;
  f2 = fopen("young.txt", "w");
  while (fscanf(f1, "%s", m1) != EOF) {
    m++;
  }
  printf("%d", m);
  fclose(f1);
  f1 = fopen("all.txt", "r");
  for (i = 0; i < m; i++) {
    fgets(m1, 100, f1);
    //  printf("%s", m1);
    sscanf(m1, "%s %s %s %d", m2, m3, m4, &n);
    if (n > 1980) {
      fprintf(f2, "%s", m1);
    }
  }
  fclose(f1);
  fclose(f2);
  return 0;
}
