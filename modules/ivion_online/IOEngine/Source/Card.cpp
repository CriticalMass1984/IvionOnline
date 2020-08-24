#include <IOEngine/Card.hpp>

namespace IO
{
    namespace Engine
    {
        Card::Card(Program* effect, Player *player) noexcept : Effect(effect), Controller(player)
        {
        }

    } // namespace Engine
} // namespace IO