#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP

namespace gm
{
  class GameApplication;

  class GameState
  {
  public:
    enum State
    {
      Start,
      Explain,
      Playing,
      Score,
      Count
    };

    GameState(GameApplication *);
    GameApplication *getGame() const;
    virtual void draw() = 0;
    virtual void handleInput() = 0;
    virtual void update() = 0;

  private:
    GameApplication *currentGame_;
  };

  class StartState : public GameState
  {
  public:
    StartState(GameApplication *);
    void draw();
    void handleInput();
    void update();

  private:
  };

  class ExplainState : public GameState
  {
  public:
    ExplainState(GameApplication *);
    void draw();
    void handleInput();
    void update();

  private:
  };

  class PlayingState : public GameState
  {
  public:
    PlayingState(GameApplication *);
    void draw();
    void handleInput();
    void update();

  private:
  };

  class ScoreState : public GameState
  {
  public:
    ScoreState(GameApplication *);
    void draw();
    void handleInput();
    void update();

  private:
  };
}

#endif
