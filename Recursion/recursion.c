#include<stdio.h>
#include<conio.h>

int fact(int f) {
  if (f = 1) {
    printf("Calculated Factorial");
    return 1;
  }
  return f * fact(f - 1);
}

int main(void) {
  int f = 12;
  clrscr();
  printf("The factorial of %d is %d \n", f, fact(f));
  getch();
  return 0;
}
