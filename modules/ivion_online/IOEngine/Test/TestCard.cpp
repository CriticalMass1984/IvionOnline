#include <IOEngine/MemoryPool.hpp>

namespace ivion = IO::Engine;

int main(int argc, char **argv)
{
    ivion::MemoryPool pool;
    int *value = pool.EmplaceObject<int>(0);
    int **valuePtr = pool.EmplaceObject<int *>(value);
}