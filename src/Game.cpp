#include "Game.hpp"

gm::GameApplication::GameApplication():
  isRunning_(true)
{
  gameStates_[GameState::State::Start] = new StartState(this);
  gameStates_[GameState::State::Explain] = new ExplainState(this);
  gameStates_[GameState::State::Playing] = new PlayingState(this);
  gameStates_[GameState::State::Score] = new ScoreState(this);
  currentState_ = gameStates_[GameState::State::Start];
}

void gm::GameApplication::run()
{
  while (isRunning_)
  {
    currentState_->handleInput();
    currentState_->draw();
    currentState_->update();
  }
}
