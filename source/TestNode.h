#include "Node.h"
#include "Config.h"
#include "MenuScreen.h"
#include "SimpleButton.h"

class TestNode : public Node
{
    public:
    //CONSTRUCTOR
    TestNode(SDL_Renderer* renderer_in = nullptr, Node* parentNode_in = nullptr): Node(renderer_in, parentNode_in)
    {
        MenuScreen* screen1 = createMenuScreen();
        ArcadeTexture* testbackground = createImage(renderer_in, "highscoresNodeImages/highscoresNodeScreenBackground.png", true);

        
    };
};