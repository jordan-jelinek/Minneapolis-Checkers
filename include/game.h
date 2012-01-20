// <~> description: displays the game state on the screen
template <typename GameState>
void DisplayGameState(const GameState&, std::ostream&);

// <~> description: determines the legality of a move on a game state
template <typename GameState, typename Move>
bool isAllowed(const GameState&, const Move&);

// <~> description: determines whether the game is over
template <typename GameState>
bool isGameOver(const GameState&);

// <~> description:
// <~>   > assumes the game is over
// <~>   > declares a winner
template <typename GameState, typename Winner>
Winner DeclareWinner(const GameState&);

// <~> description: congratulate the winner
template <typename Winner>
void CongratulateWinner(const Winner&, std::ostream&);
