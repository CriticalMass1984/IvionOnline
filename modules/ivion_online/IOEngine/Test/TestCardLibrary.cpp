#include <IOEngine/CardLibrary.hpp>

namespace ivion = IO::Engine;

int main(int argc, char **argv)
{
    ivion::CardLibrary library;
    library.LoadCards("/home/zack/Documents/IvionOnline/ClientGodot/WinterstormCardList.txt");
}