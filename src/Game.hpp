#ifndef GAME_HPP
#define GAME_HPP

namespace gm
{
  class GameApplication
  {
  public:
    GameApplication();
    void run();
    void draw();

  private:
    std::size_t gridSize_;
    std::size_t wigth_;
    std::size_t height_;
    // state
    //
  };
}

#endif