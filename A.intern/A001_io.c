#include <stdio.h>
#include <stdlib.h>

void echoCharacter();
void echoInteger();
void echoString();

int main() {
  echoCharacter();
  echoInteger();
  echoString();
  return 0;
}

void echoCharacter() {
  printf("Input a character:");
  char c;
  while (1 != scanf("%c", &c)) {
    printf("!! FATAL INPUT !!\n");
    abort();
  }
  printf("Your input is \"%c\"\n", c);
}

void echoInteger() {
  printf("Input an integer:");
  int i;
  while (1 != scanf("%d", &i)) {
    printf("!! FATAL INPUT !!\n");
    abort();
  }
  printf("Your input is \"%d\"\n", i);
}

void echoString() {
  printf("Input a string:");
  char s[10];
  while (1 != scanf("%s", &s)) {
    printf("!! FATAL INPUT !!\n");
    abort();
  }
  printf("Your input is \"%s\"\n", s);
}
