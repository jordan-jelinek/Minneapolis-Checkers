#include <iostream>
#include "game.h"

// <~> pre-condition: none
// <~> post-condition: game state is displayed on screen
// <~> parameters: current game state
template <typename GameState>
void DisplayGameState(const GameState& gs, std::ostream& os)
{
  // <~> os << "[ current game state ]" << std::endl;
}

// <~> pre-condition: none
// <~> post-condition: returns whether move is allowed
// <~> parameters: current game state, and alteration (move)
template <typename GameState, typename Move>
bool isAllowed(const GameState& gs, const Move& mv)
{

  return false; // <~> default is that it's not allowed
}

// <~> pre-condition: none
// <~> post-condition: returns whether game is over
// <~> parameters: current game state
template <typename GameState>
bool isGameOver(const GameState& gs)
{

  return true; // <~> default is that game is over
}

// <~> pre-condition: assumes that there is a winner
// <~> post-condition: returns who the winner is
// <~> parameters: current game state
template <typename GameState, typename Winner>
Winner CongratulateWinner(const GameState& gs, std::ostream& os)
{

}
