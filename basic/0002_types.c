#include <float.h>
#include <limits.h>
#include <stdbool.h>
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

void showBuiltIn() {
  char c;
  int8_t i8;
  int16_t i16;
  int32_t i32;
  int64_t i64;
  uint8_t u8;
  uint16_t u16;
  uint32_t u32;
  uint64_t u64;
  float f;
  double d;
  bool b;
  printf("The size of \"char\":%d", sizeof(c));
  printf(", min value:%.0.0lf", (double)CHAR_MIN);
  printf(", max value:%.0lf\n", (double)CHAR_MAX);
  printf("The size of \"int8_t\":%d", sizeof(i8));
  printf(", min value:%.0lf", (double)INT8_MIN);
  printf(", max value:%.0lf\n", (double)INT8_MAX);
  printf("The size of \"int16_t\":%d", sizeof(i16));
  printf(", min value:%.0lf", (double)INT16_MIN);
  printf(", max value:%.0lf\n", (double)INT16_MAX);
  printf("The size of \"int32_t\":%d", sizeof(i32));
  printf(", min value:%.0lf", (double)INT32_MIN);
  printf(", max value:%.0lf\n", (double)INT32_MAX);
  printf("The size of \"int64_t\":%d", sizeof(i64));
  printf(", min value:%.0lf", (double)INT64_MIN);
  printf(", max value:%.0lf\n", (double)INT64_MAX);
  printf("The size of \"uint8_t\":%d", sizeof(u8));
  printf(", min value:%.0lf", 0);
  printf(", max value:%.0lf\n", (double)UINT8_MAX);
  printf("The size of \"uint16_t\":%d", sizeof(u16));
  printf(", min value:%.0lf", 0);
  printf(", max value:%.0lf\n", (double)UINT16_MAX);
  printf("The size of \"uint32_t\":%d", sizeof(u32));
  printf(", min value:%.0lf", 0);
  printf(", max value:%.0lf\n", (double)UINT32_MAX);
  printf("The size of \"uint64_t\":%d", sizeof(u64));
  printf(", min value:%.0lf", 0);
  printf(", max value:%.0lf\n", (double)UINT64_MAX);
  printf("The size of \"float\":%d", sizeof(f));
  printf(", min value:%e", (double)FLT_MIN);
  printf(", max value:%e\n", (double)FLT_MAX);
  printf("The size of \"double\":%d", sizeof(d));
  printf(", min value:%e", (double)DBL_MIN);
  printf(", max value:%e\n", (double)DBL_MAX);
  printf("The size of \"bool\":%d\n", sizeof(bool));
}

void showEnum() {
  enum E { Red = -3, Green, Blue = 6, White };
  enum E red = Red;
  enum E green = Green;
  enum E blue = Blue;
  enum E white = White;
  printf("The content of \"enum\" type \"E\":{\n");
  printf("\tRed:%d\n", (int32_t)Red);
  printf("\tGreen:%d\n", (int32_t)Green);
  printf("\tBlue:%d\n", (int32_t)Blue);
  printf("\tWhite:%d\n", (int32_t)White);
  printf("}\n");
  printf("The value of \"enum\" red:%d\n", (int32_t)red);
  printf("The value of \"enum\" green:%d\n", (int32_t)green);
  printf("The value of \"enum\" blue:%d\n", (int32_t)blue);
  printf("The value of \"enum\" white:%d\n", (int32_t)white);
}

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
