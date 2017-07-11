#include <stdio.h>

/*以函数返回值之外的方式来返回值*/
void func(int *a,double *b){
  *a = 5;
  *b = 3.5;
}

int main(int argc, char const *argv[]) {
  int a;
  double b;

  func(&a,&b);

  printf("a..%d b..%f\n",a,b);

  return 0;
}
