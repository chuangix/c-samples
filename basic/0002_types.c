#include <stdint.h>
#include <stdio.h>

void showBuiltIn();
void showEnum();
void showUnion();
void showStruct();
void showFunction();
void showPointer();

int main() {
  showBuiltIn();
  showEnum();
  showUnion();
  showStruct();
  showFunction();
  showPointer();
  return 0;
}

void showBuiltIn() {}

void showEnum() {}

void showUnion() {}

void showStruct() {
  struct S1 {
    uint32_t a;
    uint8_t b;
    uint8_t c;
  };
  struct S2 {
    uint8_t a;
    uint8_t b;
    uint32_t c;
  };
  struct S3 {
    uint8_t a;
    uint32_t b;
    uint8_t c;
  };
  struct S4 {
    uint32_t a;
    uint8_t b;
    uint32_t c;
  };
  struct S5 {
    struct S1 s1;
    struct S2 s2;
  };
  struct S1 s1 = {1, 2, 3};
  struct S2 s2;
  s2.a = 4;
  s2.b = 5;
  s2.c = 6;
  printf("The content of \"struct\" object \"s1\":{\n");
  printf("\ta:%d\n", s1.a);
  printf("\tb:%d\n", s1.b);
  printf("\tc:%d\n", s1.c);
  printf("}\n");
  printf("The content of \"struct\" object \"s2\":{\n");
  printf("\ta:%d\n", s2.a);
  printf("\tb:%d\n", s2.b);
  printf("\tc:%d\n", s2.c);
  printf("}\n");
  printf("The size of \"S1\":%d\n", sizeof(struct S1));
  printf("The size of \"S2\":%d\n", sizeof(struct S2));
  printf("The size of \"S3\":%d\n", sizeof(struct S3));
  printf("The size of \"S4\":%d\n", sizeof(struct S4));
  printf("The size of \"S5\":%d\n", sizeof(struct S5));
}

void showFunction() {}

void showPointer() {}
