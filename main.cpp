#include <iostream>
#include "include/menu.h"
#include "include/game.h"

int main(int argc, char** argv)
{
  // display a welcome message
  DisplayWelcome(std::cout);
  // display a goodbye message
  DisplayGoodbye(std::cout);
  return 0;
}
