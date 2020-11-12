#pragma once

#include <RulesEngine/Allocator.hpp>
#include <RulesEngine/History.hpp>

namespace RE {
    class Context {
    
    public:
        Allocator* allocator_{nullptr};
        History* history_{nullptr};
    };
}