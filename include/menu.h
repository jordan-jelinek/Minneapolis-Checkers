#include <iostream>

// description:
//   > takes an output stream
//   > displays a welcome message
void DisplayWelcome(std::ostream&);

// description:
//   > takes an output stream
//   > displays a goodbye message
void DisplayGoodbye(std::ostream&);

// description:
//   > takes an output stream
//   > displays a menu
void DisplayMenu(std::ostream&);

// description:
//   > takes an input stream
//   > returns a selection
//     ` 0 => error
//     ` 1 => play
//     ` 2 => quit
unsigned int MenuIter(std::istream&);

// description:
//   > loops through menu iterations
//   >   until it receives a non-error
unsigned int MenuLoop();
