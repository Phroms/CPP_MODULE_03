/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:34:41 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/21 19:34:43 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("Unknow"), _hitpoint(100), _energy_point(100), _attack_damage(30)
{
    std::cout << "ClapTrap: " << _name << "murder begins" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitpoint(100), _energy_point(100), _attack_damage(30)
{
    if (name.empty())
        this->_name = "Pruebita";
    std::cout << "ClapTrap: " << _name << "murder begins" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
    this->_name = cpy._name;
    this->_hitpoint = cpy._hitpoint;
    this->_energy_point = cpy._energy_point;
    this->_attack_damage = cpy._attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    this->_name = rhs._name;
    this->_hitpoint = rhs._hitpoint;
    this->_energy_point = rhs._energy_point;
    this->_attack_damage = rhs._attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hitpoint <= 0)
        std::cout << "ClapTrap: " << _name << "Can no longer attack, has 0 life." << std::endl;
    else if (this->_energy_point <= 0)
        std::cout << "ClapTrap: " << _name << "Does not have enough energy to attack." << std::endl;
    else
    {
        std::cout << "Claptrap " << _name
                  << " attacks " << target
                  << " causing " << _attack_damage
                  << "  points of damage!" << std::endl;
        this->_energy_point -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoint <= 0)
        std::cout << "ClapTrap: " << _name << "has 0 life, you cant attack." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name
                  << " takes " << amount
                  << " points of damage!. " << std::endl;
        this->_hitpoint -= amount;
    }
    std::cout << _name << " Current HP: " << _hitpoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoint <= 0)
        std::cout << "ClapTrap: " << _name << "has 0 life and cannot be recovered." << std::endl;
    else if (this->_energy_point <= 0)
        std::cout << "ClapTrap: " << _name << "has 0 energy, cannot be recovered." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name
                  << " is repaired for" << amount
                  << " points of reapaired. " << std::endl;
        this->_hitpoint += amount;
        this->_energy_point -= 1;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: " << _name << "Are u crazy??, Im dead xP!" << std::endl;
}