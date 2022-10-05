#ifndef GAME_HPP
#define GAME_HPP

class StateManager;

namespace gm
{
  class GameApplication
  {
  public:
    GameApplication();
    void run();

  private:
    StateManager *stateManager_;
  };
}

#endif