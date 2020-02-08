//TetrisNode.h

#include "Node.h"
#include "Config.h"
#include "TetrisGame.h"

class TetrisNode : public Node
(
    public:
    TetrisNode(SDL_Renderer* renderer_in, parentNode_in) : Node(renderer_in, parentNode_in)
    {
        //create the GameScreen
        TetrisGame* game = new TetrisGame;

        //add a background
        game->addTextureToScreen();

        Map* newMap = new Map(30,10,16,renderer_in);

        std::vector<std::vector<int> > squarePiece;

        std::vector<std::vector<int> > TPiece =
        {
            {{1},{},{}}
        }
    }
)