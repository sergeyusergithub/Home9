// items.hpp
// файл содержащий различные
// классы предметов

#pragma once
#ifndef ITEMS_HPP
#define ITEMS_HPP

#include <string>

// базовый класс предметов
class Items{
public:
    // конструктор по умочланию
    Items():type_{}{}

    // конструктор с параметром
    Items(std::string type){
        type_ = type;
    }

    // конструктор копирования
    Items(const Items& other){
        type_ = other.type_;
    }

    // геттеры и сеттеры
    void Type(const std::string type); 
    std::string Type() const;

private:
    std::string type_; // название или тип зелья
};




// класс зельев
class Potions:public Items{
public:


private:    
    int recovery_hp_; // количество восстанавливаемого здоровья
    int recovery_mp_; // количество восстанавливаемой маны
};


// класс свитков
class Scrolls:public Items{
public:


private:
    int damage_hp_; // количество отнимаемого здоровь
    int decrease_mp_; // количество отнимаемой маны
};

#endif