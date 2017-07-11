#include <stdio.h>
int main(int argc, char const *argv[]) {
  int array[5];
  int *p;
  int i;

  for(i = 0; i < 5; i++){
    array[i] = i;
  }

  /*p赋值为array*/
  p = array;
  for(i = 0; i < 5; i++){
    printf("%d\n", p[i]);
    printf("%d\n", *(p + i));
  }

  /*p赋值为&array[0]*/
  for(p = &array[0]; p != &array[5]; p++){
    printf("%d\n", *p);
  }

  for(i = 0; i < 5; i++){
    printf("&array[%d]..%p\n", i,&array[i]);
  }

  return 0;
}
