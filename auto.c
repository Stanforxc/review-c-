#include <stdio.h>

void func(int a, int b){
  int c, d;
  printf("func:&a..%p &b..%p\n", &a, &b);
  printf("func:&c..%p &d..%p\n", &c, &d);
}

char *int_to_str(int int_value){
  static char buf[20];
  sprintf(buf,"%d",int_value);
  return buf;
}

int main(int argc, char const *argv[]) {
  // int a,b;
  //
  // printf("main:&a..%p &b..%p\n", &a, &b);
  // func(1,2);

  //
  // char* str1 = int_to_str(5);
  // char* str2 = int_to_str(10);
  // printf("%s\n", str1);
  // printf("%s\n", str2);

   return 0;
}
