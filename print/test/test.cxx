#include "../print.h"

int main()
{
  misc::println("Hello, world!");
  misc::println("Several", "strings", "combined");
  misc::println("A sequence of ints: ", 1, 2, 3, 4, 5);
  misc::println("A sequence of floats: ", 1.2, " ", 3.4, " ", 5.6, " ", 7.8, " ", 9.12, " ");

  misc::print("Text", " on");
  misc::print(" the", " same");
  misc::println(" line");

  return 0;
}

