#ifndef GAME_HPP
#define GAME_HPP

#include "GameState.hpp"
#include <array>

namespace gm
{
  class GameApplication
  {
  public:
    GameApplication();
    ~GameApplication();
    void run();

  private:
    void changeGameState(GameState::State);
    GameState* currentState_;
    std::array< GameState*, GameState::Count > gameStates_;
    bool isRunning_;
  };
}

#endif
