/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:04:50 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/19 16:04:51 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() //constructor por defecto, inicializa todos los mienbros
    : _name("Unknow"), _hitpoints(10), _energy_points(10), _attack_damage(0)
    
{
    std::cout << "ClapTrap: " << _name << " \033[91mmurder begins\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) //constructor con parametro, inicializa los mienbros
    : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{                                    // pero este constructor acepta un nombre
    if (name.empty())                // si el nombre esta vacio, asignale uno.
        this->_name = "Ares";
    std::cout << "ClapTrap: " << _name << " \033[91mmurder begins\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy) // constructor de copia
{
    this->_name = cpy._name;                   // todo este el contenido de este constructor
    this->_hitpoints = cpy._hitpoints;         // se llama
    this->_energy_points = cpy._energy_points; // "deep copy" -> es mejor usar este cpy
    this->_attack_damage = cpy._attack_damage; // porque vas mienbro a mienbro   
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) // constructor de operador de copia
{                                                  // aqui le decimos que es todo lo que
    this->_name = rhs._name;                       // puede copiar.
    this->_hitpoints = rhs._hitpoints;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitpoints <= 0)
        std::cout << "ClapTrap: " << _name << "Can no longer attack, has 0 life." << std::endl;
    else if (this->_energy_points <= 0)
        std::cout << "ClapTrap: " << _name << "Does not have enough energy to attack." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name 
                  << " \033[35mattacks\033[0m " << target
                  << " causing " << _attack_damage 
                  << " points of damage!. " << std::endl;
            this->_energy_points -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints <= 0)
        std::cout << "ClapTrap: " << _name << "has 0 life, you cant attack." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name
                  << " \033[32mtake\033[0m " << amount
                  << " points of damage!. " << std::endl;
            this->_energy_points -= 1;
    }   
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoints <= 0)
        std::cout << "ClapTrap: " << _name << "has 0 life and cannot be recovered." << std::endl;
    else if (this->_energy_points <= 0)
        std::cout << "ClapTrap: " << _name << "has 0 energy, cannot be recovered." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name
                  << " \033[32mtake\033[0m " << amount
                  << " points of reapaired. " << std::endl;
            this->_hitpoints += amount;
            this->_energy_points -= 1;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[30mAre u crazy??, Im dead xP!\033[0m" << std::endl;
}
/*std::string mensaje(std::string msg)
{
    msg = "Funciona :D";

    std::cout << msg << "\nImprimio el mensaje" << std::endl;
    return (msg);
}*/