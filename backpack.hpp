// backpack.hpp




#pragma once

#ifndef BACKPACK_HPP
#define BACKPACK_HPP

#include "items.hpp"
#include "equipment.hpp"
#include <vector>

// класс рюкзак
class Backpack {
public:


private:
    std::vector<Potions> potions_;
    std::vector<Scrolls> scrolls_;
    std::vector<Helmet> helmet_;
    std::vector<Weapon> weapon_;
    std::vector<Shield> shield_;
    std::vector<Shoes> shoes_;
    std::vector<Clothes> clothes_;
};



#endif // !BACKPACK_HPP

