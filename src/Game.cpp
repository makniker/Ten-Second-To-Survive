#include "Game.hpp"

void gm::GameApplication::run()
{
    mRunning = true;

    mStatManager.RegisterApp(this);

    // Register our App pointer with our StateManager
    mStateManager.RegisterApp(this);

    // First register the IAssetHandler derived classes in the GQE Core library
    mAssetManager.RegisterHandler(new (std::nothrow) ConfigHandler());
    mAssetManager.RegisterHandler(new (std::nothrow) FontHandler());
    mAssetManager.RegisterHandler(new (std::nothrow) ImageHandler());
    mAssetManager.RegisterHandler(new (std::nothrow) MusicHandler());
    mAssetManager.RegisterHandler(new (std::nothrow) SoundHandler());

    // Give derived class a time to register custom IAssetHandler classes
    InitAssetHandlers();

    // Try to open the Renderer window to display graphics
    InitRenderer();

    // Give the derived application a chance to register a IScreenFactory class
    // to provide IScreen derived classes (previously known as IState derived
    // classes) as requested.
    InitScreenFactory();

    // Give the StatManager a chance to initialize
    mStatManager.DoInit();

    // GameLoop if Running flag is still true
    gameLoop();

    // Cleanup our application
    HandleCleanup();

    // Perform our own internal Cleanup
    Cleanup();

    // Make sure our Running flag is set to false before exiting
    mRunning = false;
}