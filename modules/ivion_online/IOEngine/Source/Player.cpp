#include <IOEngine/Player.hpp>

namespace IO
{
    namespace Engine
    {

        Player::Player(int idx) : Index(idx)
        {
            for (int i = 0; i < 45; ++i)
            {
                Deck.emplace_back(this);
            }
        }
    } // namespace Engine
} // namespace IO