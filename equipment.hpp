// equipment.hpp

// заголовочный файл содержащий
// различные классы снаряжений

#pragma once

#ifndef EQUIPMENT_HPP
#define EQUIPMENT_HPP

#include <string>


// базовый класс для экипировки
class Equipment{
public:

private:
    std::string type_; // тип или название шлемов
    int force_; // количество добавляемой силы
    int shield_; // количество добавляемой защиты
    int mana_force_; // количество добавляемой силы маны
    int capacity_mana_; // увеличение емкости маны
};

// класс шлемов и других головных уборов
class Helmet:public Equipment{
public:


private:
    
};


// класс оружия содержит описание разного оружия
class Weapon:public Equipment{
public:

private:
};

// класс щитов 
class Shield:public Equipment{
public:


private:
}; 

// класс обуви
class Shoes:public Equipment{
public:

private:
};

// класс одежда
class Clothes:public Equipment{
public:


private:
};





#endif // EQUIPMENT_HPP