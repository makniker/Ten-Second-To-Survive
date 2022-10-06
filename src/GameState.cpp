#include "GameState.hpp"

gm::GameState::GameState(GameApplication * game):
  currentGame_(game)
{
}

gm::GameApplication *gm::GameState::getGame() const
{
  return currentGame_;
}

gm::StartState::StartState(GameApplication *game) : GameState(game)
{
}

gm::ExplainState::ExplainState(GameApplication *game) : GameState(game)
{
}

gm::PlayingState::PlayingState(GameApplication *game) : GameState(game)
{
}

gm::ScoreState::ScoreState(GameApplication *game) : GameState(game)
{
}
