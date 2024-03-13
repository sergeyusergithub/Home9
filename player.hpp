// player.hpp

#pragma once

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include "backpack.hpp"
#include "equipment.hpp"


// класс персонажа
class Player {
public:


private:
	int health_;			// здоровье игрока		
	std::string gender_;	// пол игрока
	int age_;				// возраст игрока
	std::string race_;		// раса игрока
	Backpack content_;		// рюкзак игрока
	Helmet pl_helmet_;		// шлем игрока
	Weapon pl_weapon_;		// оружие игрока
	Shield pl_shield_;		// щиты игрока
	Shoes pl_shoes_;		// обувь игрока
	Clothes	pl_clothes_;	// одежда игрока

};




#endif // !PLAYER_HPP

